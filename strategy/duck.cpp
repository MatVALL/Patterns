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

RubberDuck::RubberDuck(): Duck() {
    this->setFlyBehaviour(new FlyNotAllowed());
    this->setQuackBehaviour(new MuteQuack());
}

MallardDuck::MallardDuck(): Duck() {
    this->setFlyBehaviour(new FlyAllowed());
    this->setQuackBehaviour(new Quack());
}
