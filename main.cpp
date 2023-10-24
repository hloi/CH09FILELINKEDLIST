#include <iostream>
#include "Items.h"
#include "ProduceItem.h"
using namespace std;

int main() {
    Items item1("mop", 10);
    Items item2("detergent", 20);
    item1.printItem();
    item2.printItem();
//    ProduceItem prod1("grape", 20, "10/25/2023");
////    ProduceItem prod2("apple", 20, "10/30/2023");
    ProduceItem prod1("grape", 20, 1);
    ProduceItem prod2("apple", 20, 5);
    prod1.printItem();
    prod2.printItem();
}
