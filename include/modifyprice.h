/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_MODIFYPRICE_H_
#define INCLUDE_MODIFYPRICE_H_

namespace pl {

class IModifyPrice {
 public:
  virtual void modify_price(int val) = 0;
};
}  // namespace pl

#endif  // INCLUDE_MODIFYPRICE_H_
