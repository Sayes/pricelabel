/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_BASELABEL_H_
#define INCLUDE_BASELABEL_H_

#include <string>
#include "include/labelinterface.h"

namespace pl {

class BaseLabel : public ILabelInterface {
 public:
  explicit BaseLabel(const std::string& label) : label_(label) {}
  ~BaseLabel() {}
  virtual void show();

 private:
  std::string label_{""};
};
}  // namespace pl

#endif  // INCLUDE_BASELABEL_H_
