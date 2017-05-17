#include "price.h"
#include "pricelabel.h"
#include <cstdio>

Price::Price() { printf("Price::Price()\n"); }

Price::~Price() { printf("Price::~Price()\n"); }

void Price::attach(PriceLabel* pricelabel) {
    pricelabels_.push_back(pricelabel);
}

void Price::detach(PriceLabel* pricelabel) { pricelabels_.remove(pricelabel); }

void Price::notify() {
    for (auto it : pricelabels_) it->update(val_);
}
