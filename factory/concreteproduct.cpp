#include <iostream>
#include "concreteproduct.h"

/* {{{ Victorian */

bool VictorianChair::hasLegs() { return true;}
void VictorianChair::sitOn() { std::cout << "sitting on a luxurious Victorian Chair\n";}
void VictorianCoffeeTable::putStuffOn() { std::cout <<  "putting stuff on my luxurious Coffee Table\n";}

/* }}} */
/* {{{ Design*/

bool DesignChair::hasLegs() { return false;}
void DesignChair::sitOn() { std::cout << "sitting on a stylish Design Chair\n";}
void DesignCoffeeTable::putStuffOn() { std::cout << "putting stuff on my stylish Design Coffe Table\n";}

/* }}} */
