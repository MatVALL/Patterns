#include "condimentdecorator.h"
#include <string>

/*TODO: maybe make this parametrable ? getDescription and cost look very similar */
/* use template and pass it a function pointer ? eg: Beverage::*function ?*/
double CondimentDecorator::cost() {
    return unit_cost() + this->b.cost();
}
std::string CondimentDecorator:: getDescription() {
        return unit_desc() + "\t " + std::to_string(unit_cost()) + "\n" +  this->b.getDescription();
}

