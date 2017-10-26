/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_BASELABEL_H_
#define INCLUDE_BASELABEL_H_

#include <string>
#include "include/labelinterface.h"

namespace pl {

class BaseLabel : public ILabelInterface {
   public:  // NOLINT
    explicit BaseLabel(const std::string& label) : label_(label) {}
    ~BaseLabel() {}
    void show();

   private:  // NOLINT
    std::string label_{""};
};
}  // namespace pl

#endif  // INCLUDE_BASELABEL_H_
