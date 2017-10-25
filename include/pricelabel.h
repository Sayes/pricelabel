/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_PRICELABEL_H_
#define INCLUDE_PRICELABEL_H_

#include <string>
#include "include/observer.h"
#include "include/baselabel.h"

namespace pl {

class Subject;
class PriceLabel : public Observer, public BaseLabel {
   public:  // NOLINT
    PriceLabel(const Subject *, const std::string &);
    virtual ~PriceLabel();
    void update();

   private:  // NOLINT
    Subject *subject_{nullptr};
};
}  // namespace pl

#endif  // INCLUDE_PRICELABEL_H_
