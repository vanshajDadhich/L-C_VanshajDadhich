#ifndef IDIGESTIVESYSTEM_H
#define IDIGESTIVESYSTEM_H

#include<memory>
#include"Stomach.h"
#include"Mouth.h"
#include"Esophagus.h"
#include"SmallIntestine.h"

class DigestiveSystem{
        std::string food;
        std::string unabsorbedFood;
        std::unique_ptr<Stomach> stomach;
        std::unique_ptr<Mouth> mouth;
        std::unique_ptr<Esophagus> esophagus;
        std::unique_ptr<SmallIntestine> smallIntestine;
        
        void digestFood();
        
    public:
        DigestiveSystem();
        void intakeFoodToDigest(std::string intakeFood);
        std::string getOutUnabsorbedFood();   
};

#endif