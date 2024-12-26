#include "duck.h"

void Duck::doQuack() {
    this->flyBehaviour->fly();
}

void Duck::doFly() {
    this->quackBehaviour->quack();
}

void Duck::setQuackBehaviour(QuackBehaviour *qb) {
    this->quackBehaviour = qb;
}

void Duck::setFlyBehaviour(FlyBehaviour *fb) {
    this->flyBehaviour = fb;
}
