#include "modelduck.h"
#include <iostream>

using std::cout;
using std::endl;

ModelDuck::ModelDuck()
{
    m_quackBehavior = new Quack;
    m_flyBehavior = new FlyNoWay;
}


void ModelDuck::display()
{
    cout << "I am a model duck" << endl;
}
