/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_PRICE_H_
#define INCLUDE_PRICE_H_

#include "include/subject.h"

namespace pl {

class Price : public Subject {
   public:  // NOLINT
    Price();
    virtual ~Price();

    void set_price(int val) { val_ = val; }
    int get_price() { return val_; }

   private:  // NOLINT
    int val_{0};
};
}  // namespace pl

#endif  // INCLUDE_PRICE_H_
