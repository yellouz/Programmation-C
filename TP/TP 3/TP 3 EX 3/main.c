#include <stdio.h>
#include "stock.h"

int main()
{
    initialisation();
    ajout_stock(10);
    diminuer_stock(5);
    diminuer_stock(6);

    return 0;
}
