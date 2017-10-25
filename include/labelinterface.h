/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_LABELINTERFACE_H_
#define INCLUDE_LABELINTERFACE_H_

namespace pl {

class ILabelInterface {
   public:  // NOLINT
    virtual void show() = 0;
};
}  // namespace pl

#endif  // INCLUDE_LABELINTERFACE_H_
