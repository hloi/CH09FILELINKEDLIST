//
// Created by hloi on 10/24/2023.
//
#include <iostream>
#include "Fruit.h"
using std::cout;
using std::endl;

Fruit::Fruit() {
    seed = true;
}

Fruit::Fruit(string name, int quantity, int expDate, bool seed) : ProduceItem(name, quantity, expDate) {
    this->seed = seed;
}

void Fruit::printItem() {
    ProduceItem::printItem();
    if (seed) {
        cout << " has seed." << endl;
    }
    else {
        cout << " has no seed." << endl;
    }
}
