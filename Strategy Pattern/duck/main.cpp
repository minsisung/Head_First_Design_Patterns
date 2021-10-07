#include <iostream>
#include "mallardduck.h"
#include "modelduck.h"

using namespace std;

int main()
{
    Duck * mallard = new MallardDuck;
    mallard->display();
    mallard->performQuack();
    mallard->performFly();

    Duck *model = new ModelDuck;
    model->display();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered);
    model->performFly();
    return 0;
}
