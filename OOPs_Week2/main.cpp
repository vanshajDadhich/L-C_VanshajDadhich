#include <iostream>
#include <string>
#include"include/SeniorCitizen.h"
#include"include/Adult.h"
#include"include/Teenager.h"

int main() {
    Human * teenager = new Teenager("Rahul", 14, 'M', "BasketBall", 10);
    Human * adult = new Adult("Vishal", 30, 'M', "Software Engineer", 8);
    Human * seniorCitizen = new SeniorCitizen("Ratan Tata", 85, 'M', 1);

    Human* humans[] = {teenager, adult, seniorCitizen};

    for (const auto& human : humans) {
        human->displayInfo();
        delete human;
    }

    return 0;
}