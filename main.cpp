#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

struct Location {
    std::string name;
    double latitude;
    double longitude;
    bool isClustered = false;
};

// Function to calculate the haversine distance between two locations
double haversineDistance(const Location& center, const Location& location) {
   const double earthRadius = 6371.0; 
    double centerLatitude = center.latitude * M_PI / 180.0;
    double centerLongitude = center.longitude * M_PI / 180.0;
    double locationLatitude = location.latitude * M_PI / 180.0;
    double locationLongitude = location.longitude * M_PI / 180.0;

    double diffInLongitude = locationLongitude - centerLongitude;
    double diffInLatitude = locationLatitude - centerLatitude;

    double haversineSquare = std::sin(diffInLatitude / 2) * std::sin(diffInLatitude / 2) +
               std::cos(centerLatitude) * std::cos(locationLatitude) * std::sin(diffInLongitude / 2) * std::sin(diffInLongitude / 2);
    double distance = earthRadius * (2 * std::atan2(std::sqrt(haversineSquare), std::sqrt(1 - haversineSquare)));

    return distance;
}

bool readLocation(const std::string& filename, Location location[] , int& maxLocation) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::stringstream data(line);
        std::string name, latitudeStr, longitudeStr;
        double latitude, longitude;
        if (std::getline(data, name, ',') && data >> latitude && data.ignore() && data >> longitude) {  
            Location state;
            state.name = name;
            state.longitude = longitude;
            state.latitude = latitude;
            location[maxLocation] = state;
            maxLocation++;
        }
    }

    file.close();
    return true;
}

int main() {
    double clusterRadius = 1110;
    int maxLocation = 0;
    Location locations[202];
    std::string filename = "usaStates.csv";
    bool fileReaded = readLocation(filename,locations,  maxLocation);

    if(fileReaded == false){
        std::cerr << "Error: could not open file " << filename << std::endl;
        return 0;
    }

    Location clusters[maxLocation][maxLocation];
    
    int numClusters = 0;
    for (size_t index = 0; index < maxLocation; ++index) {
        if (!(locations[index].isClustered)) {
            clusters[numClusters][0] = locations[index];
            locations[index].isClustered = true;
            int numInCluster = 1;

            for (size_t count = 0; count < maxLocation; ++count) {
                double diffInLocation = haversineDistance(locations[index], locations[count]);
                if (!(locations[count].isClustered) && diffInLocation <= clusterRadius) {
                    clusters[numClusters][numInCluster++] = locations[count];
                    locations[count].isClustered = true;
                }
            }
            ++numClusters;
        }
    }


    // Print the clusters
    for (size_t index = 0; index < numClusters; ++index) {
        std::cout << "Cluster " << (index + 1) << ": ";
        for (const Location& location : clusters[index]) {
            std::cout << location.name << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}