#ifndef PRICELABEL_H_
#define PRICELABEL_H_

#include <string>
#include "observer.h"

class Subject;
class PriceLabel : public Observer {
   public:
    PriceLabel(const std::string &);
    virtual ~PriceLabel();

    void update(Subject *);

   private:
    std::string label_;
};

#endif
