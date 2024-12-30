#include <iostream>
#include <memory>
#include "concretecreator.h"

class Client {
    std::unique_ptr<FurnitureFactory> f;
    std::unique_ptr<Chair> c;
    std::unique_ptr<CoffeeTable> ct;
    public:
        Client(FurnitureFactory *f): f(f) {
        }
        ~Client() {
        }
        void makeRoom() {
            c = f->createChair();
            ct = f->createCoffeeTable();
        }
        void sit() {
            c->sitOn();
        }
        void putCoffeeDown() {
            ct->putStuffOn();
        }
};

int main() {
    Client *c = new Client(new VictorianFurnitureFactory());

    c->makeRoom();
    c->sit();
    c->putCoffeeDown();

    Client *c2 = new Client(new DesignFurnitureFactory());

    c2->makeRoom();
    c2->sit();
    c2->putCoffeeDown();

    delete c;
    return 0;
}
