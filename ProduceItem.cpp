//
// Created by hloi on 10/24/2023.
//
#include <iostream>
#include "ProduceItem.h"
using namespace std;


const int &ProduceItem::getExpDate() const {
    return expDate;
}

void ProduceItem::setExpDate(const int &expDate) {
    this->expDate = expDate;
}

ProduceItem::ProduceItem(string name, int quantity, int expDate) : Items(name, quantity) {
//    this->setItemName(name);
//    this->setItemQuantity(quantity);
    this->expDate = expDate;
}

void ProduceItem::printItem() {
    Items::printItem();
    cout << " " << expDate << endl;
}
