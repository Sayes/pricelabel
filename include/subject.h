/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_SUBJECT_H_
#define INCLUDE_SUBJECT_H_

#include <list>
#include "include/observer.h"

namespace pl {

class Subject {
   public:  // NOLINT
    virtual ~Subject();
    void attach(Observer*);
    void detach(Observer*);
    void notify();

   protected:  // NOLINT
    Subject();

   private:  // NOLINT
    std::list<Observer*> observers_;
};
}  // namespace pl

#endif  // INCLUDE_SUBJECT_H_
