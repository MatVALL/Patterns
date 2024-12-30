#ifndef __CREATOR__H
#define __CREATOR__H
#include "product.h"

class FurnitureFactory {
    public:
        virtual Chair *createChair() = 0;
        virtual CoffeeTable *createCoffeeTable() = 0;
        virtual ~FurnitureFactory() = default;
};
#endif
