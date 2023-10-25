#include "../include/SeniorCitizen.h"
#include<iostream>

SeniorCitizen :: SeniorCitizen(std::string name, int ageInYears, char gender, bool retired) : Human(name, ageInYears, gender){
    this->retired = retired;
}

void SeniorCitizen :: displayInfo(){
    std::string retiredString = retired ? "yes" : "no";
    std::cout<<"Senior Citizen -> "
             <<"\n   Name : "<<getName()
             <<"\n   Age In Years : "<<getAgeInYears()
             <<"\n   Gender : "<<getGender()
             <<"\n   Retired : "<<retiredString<<std::endl;
}

void SeniorCitizen :: setRetired(bool& retired){
    this->retired = retired;
}
