#ifndef __CONCRETE_PRODUCT__H
#define __CONCRETE_PRODUCT__H
#include "product.h"

class VictorianChair : public Chair {
    public:
        bool hasLegs();
        void sitOn();
};

class VictorianCoffeeTable : public CoffeeTable {
    public:
        void putStuffOn();
};

class DesignChair : public Chair {
    public:
        bool hasLegs();
        void sitOn();
};

class DesignCoffeeTable : public CoffeeTable {
    public:
        void putStuffOn();
};
#endif
