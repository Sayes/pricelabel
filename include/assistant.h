/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_ASSISTANT_H_
#define INCLUDE_ASSISTANT_H_

#include "include/modifyprice.h"
#include "include/price.h"

namespace pl {

class Assistant : public IModifyPrice {
 public:
  explicit Assistant(Price *price) : price_(nullptr) { price_ = price; }
  virtual ~Assistant() { delete price_; }

  void modify_price(int val);

 private:
  Price *price_{nullptr};
};
}  // namespace pl

#endif  // INCLUDE_ASSISTANT_H_
