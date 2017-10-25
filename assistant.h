#ifndef ASSISTANT_H_
#define ASSISTANT_H_

#include "modifyprice.h"
#include "price.h"

namespace pl {

class Assistant : public IModifyPrice {
   public:
    Assistant(Price *price) : price_(nullptr) { price_ = price; };
    virtual ~Assistant() { delete price_; };

    void modify_price(int val);

   private:
    Price *price_{nullptr};
};
}  // namespace pl

#endif
