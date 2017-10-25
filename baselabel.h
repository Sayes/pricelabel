#ifndef BASELABEL_H_
#define BASELABEL_H_

#include "labelinterface.h"
#include <string>

namespace pl {

class BaseLabel : public ILabelInterface {
   public:
    explicit BaseLabel(const std::string& label) : label_(label){};
    ~BaseLabel(){};
    virtual void show();

   private:
    std::string label_{""};
};
}  // namespace pl

#endif
