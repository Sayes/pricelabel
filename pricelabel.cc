#include <cstdlib>
#include <cstdio>
#include "pricelabel.h"

PriceLabel::PriceLabel(const std::string& label) : label_(label) {}

PriceLabel::~PriceLabel() {}

void PriceLabel::update(int value) {
    printf("label %s price is %d\n", label_.c_str(), value);
}
