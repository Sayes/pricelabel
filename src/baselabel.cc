/*
 * Copyright Richard Shen 2017
 */

#include "include/baselabel.h"
#include <cstdio>

namespace pl {

void BaseLabel::show() { printf("label %s", label_.c_str()); }
}  // namespace pl
