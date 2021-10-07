#ifndef MODELDUCK_H
#define MODELDUCK_H


#include "duck.h"

class ModelDuck:public Duck
{
public:
    ModelDuck();
    void display() override;
};

#endif // MODELDUCK_H
