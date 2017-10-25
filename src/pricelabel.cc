/*
 * Copyright Richard Shen 2017
 */

#include <cstdio>
#include "include/pricelabel.h"
#include "include/price.h"
#include "include/subject.h"
#include "include/baselabel.h"

namespace pl {

PriceLabel::PriceLabel(const Subject* psubject, const std::string& label)
    : BaseLabel(label), subject_(const_cast<Subject*>(psubject)) {}

PriceLabel::~PriceLabel() {}

void PriceLabel::update() {
    Price* p = static_cast<Price*>(subject_);
    if (!p) return;
    show();
    printf(" price is %d\n", p->get_price());
}
}  // namespace pl
