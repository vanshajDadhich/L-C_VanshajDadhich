#ifndef SMALLINTESTINE_H
#define SMALLINTESTINE_H

#include"IDigestiveOrgan.h"

class SmallIntestine : public IDigestiveOrgan{
        std::string bileFromLiver;
        std::string digestiveEnzymesFromPancreas;
        std::string foodForDigestionandNutrientAbsorption;
        
        virtual void processFoodToDigest();

    public:
        virtual std::string getFoodToProcess(std::string & intakeFood);
};

#endif