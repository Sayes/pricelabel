/*
 * Copyright Richard Shen 2017
 */

#ifndef INCLUDE_BOSS_H_
#define INCLUDE_BOSS_H_

#include "include/singleton.h"
#include "include/modifyprice.h"
#include "include/assistant.h"

namespace pl {

class Boss : public IMktSingleton<Boss>, public IModifyPrice {
   public:  // NOLINT
    void modify_price(int val);
    void specify_assistant(Assistant* ass);

   private:  // NOLINT
    Boss();
    virtual ~Boss();
    Boss(const Boss&);
    Boss& operator=(const Boss&);
    friend IMktSingleton<Boss>;

   private:  // NOLINT
    Assistant* ass_{nullptr};
};
}  // namespace pl

#endif  // INCLUDE_BOSS_H_
