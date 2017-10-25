#ifndef OBSERVER_H_
#define OBSERVER_H_

namespace pl {

class Observer {
   public:
    virtual ~Observer();
    virtual void update() = 0;

   protected:
    Observer();
};
}  // namespace pl

#endif
