#include <iostream>

class QuackBehaviour {
    public:
        virtual void quack() = 0;
};

class Quack: public QuackBehaviour {
    void quack();
};

class MuteQuack: public QuackBehaviour{
    void quack();
};
