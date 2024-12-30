#include "concretecreator.h"
#include "concreteproduct.h"

Chair * VictorianFurnitureFactory:: createChair()
{
    return new VictorianChair();
}
CoffeeTable *VictorianFurnitureFactory::createCoffeeTable()
{
    return new VictorianCoffeeTable();
}
Chair * DesignFurnitureFactory:: createChair()
{
    return new DesignChair();
}
CoffeeTable *DesignFurnitureFactory::createCoffeeTable()
{
    return new VictorianCoffeeTable();
}
