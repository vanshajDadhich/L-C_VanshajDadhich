#include "../include/Human.h"
#include<iostream>

Human :: Human(std::string& name, int& ageInYears, char& gender){
    this->name = name;
    this->ageInYears = ageInYears;
    this->gender = gender;
}

std::string Human :: getName() {
    return this->name;
}

int Human :: getAgeInYears() {
    return this->ageInYears;
}

char Human :: getGender() {
    return this->gender;
}