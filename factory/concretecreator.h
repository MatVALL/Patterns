#ifndef __CONCRETE_CREATOR__H
#define __CONCRETE_CREATOR__H
#include "creator.h"

class VictorianFurnitureFactory : public FurnitureFactory {
    public:
        Chair *createChair();
        CoffeeTable *createCoffeeTable();
};

class DesignFurnitureFactory : public FurnitureFactory {
    public:
        Chair *createChair();
        CoffeeTable *createCoffeeTable();
};
#endif
