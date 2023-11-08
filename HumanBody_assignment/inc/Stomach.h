#ifndef STOMACH_H
#define STOMACH_H

#include"IDigestiveOrgan.h"

class Stomach : public IDigestiveOrgan{
        std::string foodToProcessAndBreakProtein;
        std::string HydrocholoricAcid;
        
        virtual void processFoodToDigest();
    public:
        virtual std::string getFoodToProcess(std::string & intakeFood);
};

#endif