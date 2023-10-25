#include "Human.h"

class Adult : public Human {
    private:
        std::string profession;
        int WorkingExperienceInYears;

    public:
        Adult(std::string name, int ageInYears, char gender, std::string profession, int WorkingExperienceInYears);
        void displayInfo();
        void setProfession(std::string& profession);

};