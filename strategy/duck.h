#include "fly.h"
#include "quack.h"

class Duck {
    private:
        FlyBehaviour *flyBehaviour;
        QuackBehaviour *quackBehaviour;
    public:
        void setFlyBehaviour(FlyBehaviour *d);
        void setQuackBehaviour(QuackBehaviour *q);
        void doQuack();
        void doFly();
    protected:
        Duck() {};
    /* imagine generic  duck stuff here. */
};
