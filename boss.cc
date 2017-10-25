#include "boss.h"
#include <cstdio>

namespace pl {

Boss::Boss() : ass_(nullptr) { printf("Boss::Boss()\n"); }

Boss::~Boss() { printf("Boss::~Boss()\n"); }

void Boss::specify_assistant(Assistant *ass) {
    if (!ass_) {
        ass_ = ass;
    }
}

void Boss::modify_price(int val) {
    if (ass_) ass_->modify_price(val);
}
}  // namespace pl
