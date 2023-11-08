#ifndef MOUTH_H
#define MOUTH_H

#include"IDigestiveOrgan.h"

class Mouth : public IDigestiveOrgan{
        std::string foodtoBeChewedForDigestion;
        
        virtual void processFoodToDigest();

    public:
        virtual std::string getFoodToProcess(std::string & intakeFood);
};

#endif