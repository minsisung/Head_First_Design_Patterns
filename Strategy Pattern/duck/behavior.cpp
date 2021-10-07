#include "behavior.h"
#include <iostream>

using std::cout;
using std::endl;


void FlyWithWings::fly()
{
    cout << "I am flying!" << endl;
}

void FlyNoWay::fly()
{
    cout << "I cannot fly!" << endl;
}

void FlyRocketPowered::fly()
{
    cout << "I am fly with a rocket!" << endl;
}

void Quack::quack()
{
    cout << "Quack" << endl;
}

void Squeak::quack()
{
    cout << "Squeak" << endl;
}

void MuteQuack::quack()
{
    cout << "<< Silence >>" << endl;
}
