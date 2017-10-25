#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <list>
#include "observer.h"

namespace pl {

class Subject {
   public:
    virtual ~Subject();
    void attach(Observer*);
    void detach(Observer*);
    void notify();

   protected:
    Subject();

   private:
    std::list<Observer*> observers_;
};
}  // namespace pl

#endif
