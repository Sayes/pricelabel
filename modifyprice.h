#ifndef MODPRICE_H_
#define MODPRICE_H_

class IModifyPrice {
   public:
    virtual void modify_price(int val) = 0;
};

#endif
