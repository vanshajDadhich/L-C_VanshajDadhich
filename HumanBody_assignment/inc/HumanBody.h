#ifndef HUMANBODY_H
#define HUMANBODY_H

#include "DigestiveSystem.h" 

class HumanBody{
       DigestiveSystem digestiveSystem;

    public :
        void getFoodToEat(std::string food);
        std::string removeWasteFood();  
};

#endif