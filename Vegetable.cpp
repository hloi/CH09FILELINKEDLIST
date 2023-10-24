//
// Created by hloi on 10/24/2023.
//
#include <iostream>
#include "Vegetable.h"

using std::cout;
using std::endl;

Vegetable::Vegetable(string name, int quantity, int expDate, bool root) : ProduceItem(name, quantity, expDate) {
    this->root = root;

}

void Vegetable::printItem() {
    ProduceItem::printItem();
    
    if (root) {
        cout << " is root." << endl;
    }
    else {
        cout << " is not root." << endl;
    }
}
