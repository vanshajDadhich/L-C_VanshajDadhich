#include"Human.h" 

class Teenager : public Human {
    private:
        std::string hobby;
        int currentStandard;

    public:
        Teenager(std::string name, int ageInYears, char gender, std::string hobby, int currentStandard);
        void displayInfo();
        void setHobby(std::string& hobby);

};
