#include <iostream>

class FlyBehaviour {
    public:
        virtual void fly() = 0;
};

class FlyAllowed: public FlyBehaviour {
    void fly();
};

class FlyNotAllowed: public FlyBehaviour{
    void fly();
};
