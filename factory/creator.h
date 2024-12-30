#ifndef __CREATOR__H
#define __CREATOR__H
#include <memory>
#include "product.h"

class FurnitureFactory {
    public:
        virtual std::unique_ptr<Chair> createChair() = 0;
        virtual std::unique_ptr<CoffeeTable> createCoffeeTable() = 0;
        virtual ~FurnitureFactory() = default;
};
#endif
