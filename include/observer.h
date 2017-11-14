/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_OBSERVER_H_
#define INCLUDE_OBSERVER_H_

namespace pl {

class Observer {
 public:
  virtual ~Observer();
  virtual void update() = 0;

 protected:
  Observer();
};
}  // namespace pl

#endif  // INCLUDE_OBSERVER_H_
