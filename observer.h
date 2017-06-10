#ifndef OBSERVER_H_
#define OBSERVER_H_

class Subject;
class Observer {
   public:
    virtual ~Observer();
    virtual void update(Subject*) = 0;

   protected:
    Observer();
};

#endif
