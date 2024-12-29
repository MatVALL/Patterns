#ifndef __BEVERAGE__H
#define __BEVERAGE__H
#include <string>

class Beverage {
    public:
        virtual double cost() = 0;
        virtual std::string getDescription() = 0;
};

#endif
