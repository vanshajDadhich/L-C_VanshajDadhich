#include"../inc/SmallIntestine.h"

void SmallIntestine::processFoodToDigest(){
    foodForDigestionandNutrientAbsorption = "Unabsorbed Food";
    std::cout<<"Small Intestine: Food from stomach is processed to absorb nutrients and breaking down into fat, protien and carbohydrates to remove unabsorbed Food with the help of pancreas and liver"<<std::endl;
}

std::string SmallIntestine::getFoodToProcess(std::string& intakeFood){
    foodForDigestionandNutrientAbsorption = intakeFood;
    this->processFoodToDigest();
    return foodForDigestionandNutrientAbsorption;
}