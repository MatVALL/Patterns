#include <iostream>
#include "duck.h"

int main()
{
    MallardDuck d;
    RubberDuck r;

    d.doFly();
    d.doQuack();
    r.doFly();
    r.doQuack();

    return 0;
}
