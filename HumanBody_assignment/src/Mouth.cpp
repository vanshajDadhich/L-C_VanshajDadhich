#include"../inc/Mouth.h"

void Mouth::processFoodToDigest(){
    foodtoBeChewedForDigestion += " Chewed with saliva";
    std::cout<<"Mouth: Chewing Food with saliva that breaks carbohydrates"<<std::endl;
}

std::string Mouth::getFoodToProcess(std::string& intakeFood){
    foodtoBeChewedForDigestion = intakeFood;
    this->processFoodToDigest();
    return foodtoBeChewedForDigestion;
}

