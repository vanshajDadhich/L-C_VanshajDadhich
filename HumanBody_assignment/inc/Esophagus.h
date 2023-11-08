#ifndef ESOPHAGUS_H
#define ESOPHAGUS_H

#include"IDigestiveOrgan.h"

class Esophagus : public IDigestiveOrgan{
        std::string foodToBeTransport;
        
        virtual void processFoodToDigest();
      
    public:
        virtual std::string getFoodToProcess(std::string& intakeFood);   
};

#endif