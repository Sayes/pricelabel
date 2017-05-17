#ifndef PRICELABEL_H_
#define PRICELABEL_H_

#include <string>

class Price;
class PriceLabel {
   public:
    PriceLabel(const std::string &);
    virtual ~PriceLabel();

    void update(int value);

   private:
    Price *price_;
    std::string label_;
};

#endif
