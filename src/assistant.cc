/*
 * Copyright Richard Shen 2017
 */

#include "include/assistant.h"

namespace pl {

void Assistant::modify_price(int val) {
    if (price_) {
        price_->set_price(val);
        price_->notify();
    }
}
}  // namespace pl
