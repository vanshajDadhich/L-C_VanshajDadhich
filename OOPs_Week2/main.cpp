#include <iostream>
#include <string>
#include"include/SeniorCitizen.h"
#include"include/Adult.h"
#include"include/Teenager.h"

int main() {
    int numHuman;
    std::cout<<"Number of Humans : "<<std::endl;
    std::cin>>numHuman;
    Human* humans[numHuman];
    for (int index=0; index<numHuman; index++){
        std::string name;
        int ageInYears;
        char gender;
        std::cout<<"Human "<<index<<": "<<std::endl;
        std::cout<<"Name : "<<std::endl;
        std::cin>>name;
        std::cout<<"Age in Years: "<<std::endl;
        std::cin>>ageInYears;
        std::cout<<"Gender: "<<std::endl;
        std::cin>>gender;

        if(ageInYears<20){
            std::string hobby;
            int currentStandard;
            std::cout<<"Hobby of Teenager: "<<std::endl;
            std::cin>>hobby;
            std::cout<<"Current Standard of teenager: "<<std::endl;
            std::cin>>currentStandard;
            humans[index] = new Teenager(name, ageInYears, gender, hobby, currentStandard);
        }else if(ageInYears>=20 && ageInYears< 65){
            std::string profession;
            int workingExperienceInYears;
            std::cout<<"Profession of Adult: "<<std::endl;
            std::cin>>profession;
            std::cout<<"Working Experience in Years of Adult: "<<std::endl;
            std::cin>>workingExperienceInYears;
            humans[index] = new Adult(name, ageInYears, gender, profession, workingExperienceInYears);
        }else{
            bool retired;
            std::cout<<"Senior citizen retired: "<<std::endl;
            std::cin>>retired;
            humans[index] = new SeniorCitizen(name, ageInYears, gender, retired);
        }
    }

    std::cout<<"Humans in Database:"<<std::endl;
    for (const auto& human : humans) {
        human->displayInfo();
        delete human;
    }
    
    return 0;
}