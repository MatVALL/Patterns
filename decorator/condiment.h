#ifndef __CONDIMENT__H
#define __CONDIMENT__H

#include "beverage.h"

class Espresso: public Beverage {
    public:
        Espresso() = default;
        double cost();
        std::string getDescription ();
};

double Espresso::cost() {
    return 5.99; // it is StarBuzz after all
}
std::string Espresso::getDescription() {
    return "Espresso\t" + std::to_string(cost());
}

class Tea: public Beverage {
    public:
        Tea() = default;
        double cost();
        std::string getDescription ();
};

double Tea::cost() {
    return 3.99; // it is StarBuzz after all
}

std::string Tea::getDescription() {
    return "Tea\t " + std::to_string(cost());
}
#endif
