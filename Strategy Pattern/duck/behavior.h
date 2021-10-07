#ifndef BEHAVIOR_H
#define BEHAVIOR_H


class FlyBehavior
{
public:
    FlyBehavior() {}
    virtual void fly() = 0;
};


class QuackBehavior
{
public:
    QuackBehavior() {}
    virtual void quack() = 0;
};


class FlyWithWings: public FlyBehavior
{
public:
    void fly() override;
};

class FlyNoWay: public FlyBehavior
{
public:
    void fly() override;
};

class FlyRocketPowered: public FlyBehavior
{
public:
    void fly() override;
};


class Quack: public QuackBehavior
{
public:
    void quack() override;
};

class Squeak: public QuackBehavior
{
public:
    void quack() override;
};


class MuteQuack: public QuackBehavior
{
public:
    void quack() override;
};

#endif // BEHAVIOR_H
