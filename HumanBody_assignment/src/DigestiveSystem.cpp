#include"../inc/DigestiveSystem.h"


DigestiveSystem :: DigestiveSystem() {
    stomach = std::make_unique<Stomach>();
    mouth = std::make_unique<Mouth>();
    esophagus = std::make_unique<Esophagus>();
    smallIntestine = std::make_unique<SmallIntestine>();
}

void DigestiveSystem::intakeFoodToDigest(std::string intakeFood){
   this->food = intakeFood;
   this->digestFood();
}
        
        
std::string DigestiveSystem::getOutUnabsorbedFood(){
    return unabsorbedFood;
}
        
void DigestiveSystem::digestFood(){
    std::cout<<"Process for digestion of Food: "<<food<<std::endl;

    this->food = mouth->getFoodToProcess(food);
    std::cout<<"Mouth Processed "<<this->food<<std::endl;

    this->food = esophagus->getFoodToProcess(food);
    std::cout<<"Esophagus transferred food "<<this->food<<std::endl;

    this->food = stomach->getFoodToProcess(food);
    std::cout<<"Stomach "<<this->food<<std::endl;

    this->unabsorbedFood = smallIntestine->getFoodToProcess(food);
    std::cout<<"Small intestine absorbed nutrients, get out the undigestive and "<<this->unabsorbedFood<<std::endl;
}