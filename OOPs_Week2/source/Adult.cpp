#include "../include/Adult.h"
#include<iostream>

Adult :: Adult(std::string name, int ageInYears, char gender, std::string profession, int workingExperienceInYears) : Human(name, ageInYears, gender){
    this->profession = profession;
    this->workingExperienceInYears = workingExperienceInYears;
}

void Adult :: displayInfo(){
    std::cout<<"Adult -> "
             <<"\n   Name : "<<getName()
             <<"\n   Age In Years : "<<getAgeInYears()
             <<"\n   Gender : "<<getGender()
             <<"\n   Profession : "<<profession
             <<"\n   Working Experience In Years : "<<workingExperienceInYears<<std::endl;
}

void Adult :: setProfession(std::string& hobby){
    this->profession = profession;
}

void Adult :: setWorkingExperienceInYears(int workingExperienceInYears){
    this->workingExperienceInYears = workingExperienceInYears;
}
