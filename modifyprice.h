#ifndef MODPRICE_H_
#define MODPRICE_H_

namespace pl {

class IModifyPrice {
   public:
    virtual void modify_price(int val) = 0;
};
}  // namespace pl

#endif
