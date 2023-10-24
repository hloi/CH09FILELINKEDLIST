//
// Created by hloi on 10/24/2023.
//
#include <iostream>
#include "Items.h"

using namespace std;

const string &Items::getItemName() const {
    return itemName;
}

void Items::setItemName(const string &itemName) {
    Items::itemName = itemName;
}

int Items::getItemQuantity() const {
    return itemQuantity;
}

void Items::setItemQuantity(int itemQuantity) {
    Items::itemQuantity = itemQuantity;
}

void Items::printItem() {
    cout << itemName << " " << itemQuantity << endl;
}

Items::Items(string name, int quantity) {
    this->itemName = name;
    this->itemQuantity = quantity;
}
