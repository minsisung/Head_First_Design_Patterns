#include "duck.h"
Duck::Duck()
{

}

void Duck::performQuack()
{
    m_quackBehavior->quack();
}

void Duck::performFly()
{
    m_flyBehavior->fly();
}

void Duck::setFlyBehavior(FlyBehavior * fb)
{
    if(m_flyBehavior != nullptr)
    {
        delete m_flyBehavior;
    }
    m_flyBehavior = fb;
}
