
#ifndef HUMAN_H
#define HUMAN_H

#include<string>

class Human {
    private:
        std::string name;
        int ageInYears;
        char gender;

    protected:
        std::string getName();
        int getAgeInYears();
        char getGender();
        void setName(std::string name);
        void setAgeInYears(int ageInYears);
        void setGender(char gender);

    public:
        Human(std::string& name, int& ageInYears, char& gender);
        virtual void displayInfo() = 0;
};

#endif