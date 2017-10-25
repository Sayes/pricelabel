#include <cstdlib>
#include "boss.h"
#include "pricelabel.h"

int main(int argc, char *argv[]) {
    pl::Boss *pboss = pl::Boss::get_instance();
    pl::Price price;

    pl::PriceLabel label1(&price, "label1");
    pl::PriceLabel label2(&price, "label2");
    pl::PriceLabel label3(&price, "label3");

    price.attach(&label1);
    price.attach(&label2);
    price.attach(&label3);

    pl::Assistant ass(&price);
    pboss->specify_assistant(&ass);
    pboss->modify_price(20);
    price.detach(&label2);
    pboss->modify_price(30);

    pboss->release();

    exit(EXIT_SUCCESS);
}
