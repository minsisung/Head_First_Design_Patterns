#include <QCoreApplication>
#include "beverage.h"
#include "condimentdecorator.h"
#include "qdebug.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Beverage* beverage = new Espresso();
    qDebug()<<beverage->getDescription() << " $:" <<beverage->cost()<<endl;


    Beverage* beverage2 = new DarkRoast();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    qDebug()<<beverage2->getDescription() << " $:" <<beverage2->cost()<<endl;

    Beverage* beverage3 = new HouseBlend();
    beverage3 = new Mocha(beverage3);
    beverage3 = new Soy(beverage3);
    beverage3 = new Whip(beverage3);
    qDebug()<<beverage3->getDescription() << " $:" <<beverage3->cost()<<endl;

    return a.exec();
}
