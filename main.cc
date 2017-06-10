#include <cstdlib>
#include "boss.h"
#include "pricelabel.h"

int main(int argc, char *argv[]) {
    Boss *pboss = Boss::get_instance();
    Price price;

    PriceLabel label1("label1");
    PriceLabel label2("label2");
    PriceLabel label3("label3");

    price.attach(&label1);
    price.attach(&label2);
    price.attach(&label3);

    Assistant ass(&price);
    pboss->specify_assistant(&ass);
    pboss->modify_price(20);
    price.detach(&label2);
    pboss->modify_price(30);

    pboss->release();

    exit(EXIT_SUCCESS);
}
