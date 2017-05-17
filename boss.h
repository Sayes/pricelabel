#ifndef BOSS_H_
#define BOSS_H_

#include "singleton.h"
#include "modifyprice.h"
#include "assistant.h"
#include "price.h"

class Boss : public IMktSingleton<Boss>, public IModifyPrice {
   public:
    void modify_price(int val);
    void specify_assistant(Assistant* ass);

   private:
    Boss();
    virtual ~Boss();
    Boss(const Boss&);
    Boss& operator=(const Boss&);
    friend IMktSingleton<Boss>;

   private:
    Assistant* ass_;
};

#endif
