#include"../inc/Stomach.h"

void Stomach::processFoodToDigest(){
    this->foodToProcessAndBreakProtein = "Digested half of the way breaking protein with secration of Hydrocholoric Acid";
    std::cout<<"Stomach : processing food using HCL secration"<<std::endl;
}

std::string Stomach::getFoodToProcess(std::string& intakeFood){
    this->foodToProcessAndBreakProtein = intakeFood;
    this->processFoodToDigest();
    return this->foodToProcessAndBreakProtein;
}