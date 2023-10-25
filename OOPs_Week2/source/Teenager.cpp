#include "../include/Teenager.h"
#include<iostream>

Teenager :: Teenager(std::string name, int ageInYears, char gender, std::string hobby, int currentStandard) : Human(name, ageInYears, gender){
    this->hobby = hobby;
    this->currentStandard = currentStandard;
}

void Teenager :: displayInfo(){
    std::cout<<"Teenager -> "
             <<"\n   Name : "<<getName()
             <<"\n   Age In Years : "<<getAgeInYears()
             <<"\n   Gender : "<<getGender()
             <<"\n   Hobby : "<<hobby
             <<"\n   Current Standard : "<<currentStandard<<std::endl;
}

void Teenager :: setHobby(std::string& hobby){
    this->hobby = hobby;
}
