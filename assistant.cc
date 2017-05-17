#include "assistant.h"

void Assistant::modify_price(int val) {
    if (price_) {
        price_->set_price(val);
        price_->notify();
    }
}
