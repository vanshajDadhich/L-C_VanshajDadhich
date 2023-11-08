#include"inc/HumanBody.h"

int main(){
    HumanBody human;
    human.getFoodToEat("Bread");
    std::cout<<human.removeWasteFood()<<" gets out of the body"<<std::endl;
}