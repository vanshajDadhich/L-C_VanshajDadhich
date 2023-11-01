#include "Human.h"

class Adult : public Human {
    private:
        std::string profession;
        int workingExperienceInYears;

    public:
        Adult(std::string name, int ageInYears, char gender, std::string profession, int workingExperienceInYears);
        void displayInfo();
        void setProfession(std::string& profession);
        void setWorkingExperienceInYears(int workingExperienceInYears);
};