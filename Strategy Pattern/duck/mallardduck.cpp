#include "mallardduck.h"
#include <iostream>

using std::cout;
using std::endl;

MallardDuck::MallardDuck()
{
    m_quackBehavior = new Quack;
    m_flyBehavior = new FlyWithWings;
}


void MallardDuck::display()
{
    cout << "I am a real Mallard Duck" << endl;
}
