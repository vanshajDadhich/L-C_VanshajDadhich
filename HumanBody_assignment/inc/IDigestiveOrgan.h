#ifndef IDIGESTIVEORGAN_H
#define IDIGESTIVEORGAN_H

#include<iostream>
#include<string>

class IDigestiveOrgan{

    public : 
        virtual std::string getFoodToProcess(std::string& intakeFood) = 0;
        virtual void processFoodToDigest() = 0;
};

#endif