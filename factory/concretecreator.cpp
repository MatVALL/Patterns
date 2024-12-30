#include <memory>
#include "concretecreator.h"
#include "concreteproduct.h"

std::unique_ptr<Chair> VictorianFurnitureFactory:: createChair()
{
    return std::unique_ptr<Chair>(new VictorianChair());
}
std::unique_ptr<CoffeeTable> VictorianFurnitureFactory::createCoffeeTable()
{
    return std::unique_ptr<CoffeeTable>(new VictorianCoffeeTable());
}

std::unique_ptr<Chair> DesignFurnitureFactory:: createChair()
{
    return std::unique_ptr<Chair>(new DesignChair());
}

std::unique_ptr<CoffeeTable> DesignFurnitureFactory::createCoffeeTable()
{
    return std::unique_ptr<CoffeeTable>(new DesignCoffeeTable());
}
