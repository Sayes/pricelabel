#include "pricelabel.h"
#include "price.h"

PriceLabel::PriceLabel(const std::string& label) : label_(label) {}
PriceLabel::~PriceLabel() {}

void PriceLabel::update(Subject* subject) {
    Price* p = static_cast<Price*>(subject);
    if (!p) return;
    printf("label %s price is %d\n", label_.c_str(), p->get_price());
}
