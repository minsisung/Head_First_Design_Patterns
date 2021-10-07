#ifndef DUCK_H
#define DUCK_H


#include "behavior.h"

class Duck
{
public:
    Duck();
    void performQuack();
    void performFly();
    virtual void display() = 0;

    void setFlyBehavior(FlyBehavior * fb);
protected:
    FlyBehavior *m_flyBehavior;
    QuackBehavior *m_quackBehavior;

};

#endif // DUCK_H
