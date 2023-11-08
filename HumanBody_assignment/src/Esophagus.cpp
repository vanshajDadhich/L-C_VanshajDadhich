#include"../inc/Esophagus.h"

void Esophagus::processFoodToDigest(){
    std::cout<<"Esophagus: Transporting food from mouth to stomach"<<std::endl;
}

std::string Esophagus::getFoodToProcess(std::string& intakeFood){
    foodToBeTransport = intakeFood;
    this->processFoodToDigest();
    return foodToBeTransport;
}


