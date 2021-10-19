#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include "qvector.h"

class Subject
{
public:
    Subject();
    virtual void registerObserver(Observer *ob) = 0;
    virtual void removeObserver(Observer *ob) = 0;
    virtual void notifyObservers() = 0;
};



#endif // SUBJECT_H
