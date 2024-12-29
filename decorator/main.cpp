#include <iostream>
#include "beverage.h"
#include "condiment.h"
#include "condimentdecorator.h"

int main() {
    Beverage *b1 = new Tea();
    Beverage *b2 = new Sugar(std::ref(*b1));
    Beverage *b3 = new Sugar(std::ref(*b2));
    Beverage *b4 = new Milk(std::ref(*b3));

    std::cout << b4->getDescription() << " total=" << b4->cost();
    return 0;
}
