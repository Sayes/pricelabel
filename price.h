#ifndef PRICE_H_
#define PRICE_H_

#include "subject.h"

namespace pl {

class Price : public Subject {
   public:
    Price();
    virtual ~Price();

    void set_price(int val) { val_ = val; }
    int get_price() { return val_; }

   private:
    int val_{0};
};
}  // namespace pl

#endif
