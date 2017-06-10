#ifndef ASSISTANT_H_
#define ASSISTANT_H_

#include "modifyprice.h"
#include "price.h"

class Assistant : public IModifyPrice {
   public:
    Assistant(Price *price) : price_(0) { price_ = price; };
    virtual ~Assistant() { delete price_; };

    void modify_price(int val);

   private:
    Price *price_;
};

#endif
