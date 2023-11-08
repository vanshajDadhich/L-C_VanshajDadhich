#include"../inc/HumanBody.h"

void HumanBody::getFoodToEat(std::string food){
    digestiveSystem.intakeFoodToDigest(food);
}

std::string HumanBody::removeWasteFood(){
    return digestiveSystem.getOutUnabsorbedFood();
}