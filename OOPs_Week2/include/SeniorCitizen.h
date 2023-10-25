#include "Human.h"

class SeniorCitizen : public Human {
    private:
        bool retired;

    public:
        SeniorCitizen(std::string name, int ageInYears, char gender, bool retired);
        void displayInfo();
        void setRetired(bool& retired);
        
};