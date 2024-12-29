#ifndef __COND_DECORATOR__H
#define __COND_DECORATOR__H
#include "beverage.h"

class CondimentDecorator : public Beverage {
    protected:
        virtual double unit_cost() {return 0.;};
        virtual std::string unit_desc() {return "Air";};
    public:
        Beverage &b;
        CondimentDecorator(Beverage &b) : b(b) {}
        double cost();
        virtual std::string getDescription();
};

/* TODO: getters and setter for costs and desc */
class Milk : public CondimentDecorator {
    public:
        virtual double unit_cost() {return 0.19;};
        virtual std::string unit_desc() {return "Milk";};
        using CondimentDecorator::CondimentDecorator;
};

class Sugar : public CondimentDecorator {
    virtual double unit_cost() {return 0.05;};
    virtual std::string unit_desc() {return "Sugar";};
    using CondimentDecorator::CondimentDecorator;
};
#endif
