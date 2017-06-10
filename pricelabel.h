#ifndef PRICELABEL_H_
#define PRICELABEL_H_

#include <string>

class PriceLabel {
   public:
    PriceLabel(const std::string &);
    virtual ~PriceLabel();

    void update(int value);

   private:
    std::string label_;
};

#endif
