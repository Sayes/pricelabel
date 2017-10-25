#ifndef PRICELABEL_H_
#define PRICELABEL_H_

#include <string>
#include "observer.h"
#include "baselabel.h"

namespace pl {

class Subject;
class PriceLabel : public Observer, public BaseLabel {
   public:
    PriceLabel(const Subject *, const std::string &);
    virtual ~PriceLabel();
    void update();

   private:
    Subject *subject_{nullptr};
};
}  // namespace pl

#endif
