#ifndef PRICE_H_
#define PRICE_H_

#include <list>
#include "pricelabel.h"

class Price {
   public:
    Price();
    virtual ~Price();

    void attach(PriceLabel*);
    void detach(PriceLabel*);
    void notify();

    void set_price(int val) { val_ = val; }

   private:
    int val_;
    std::list<PriceLabel*> pricelabels_;
};

#endif
