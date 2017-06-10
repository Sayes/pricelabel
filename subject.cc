#include "subject.h"
#include "observer.h"

Subject::Subject() {}

Subject::~Subject() {}

void Subject::attach(Observer* o) { observers_.push_back(o); }

void Subject::detach(Observer* o) { observers_.remove(o); }

void Subject::notify() {
    for (auto it : observers_) it->update(this);
}
