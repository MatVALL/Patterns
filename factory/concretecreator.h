#ifndef __CONCRETE_CREATOR__H
#define __CONCRETE_CREATOR__H
#include <memory>
#include "creator.h"

class VictorianFurnitureFactory : public FurnitureFactory {
    public:
        std::unique_ptr<Chair> createChair();
        std::unique_ptr<CoffeeTable> createCoffeeTable();
};

class DesignFurnitureFactory : public FurnitureFactory {
    public:
        std::unique_ptr<Chair> createChair();
        std::unique_ptr<CoffeeTable> createCoffeeTable();
};
#endif
