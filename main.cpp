#include <iostream>
#include <vector>
#include "Items.h"
#include "ProduceItem.h"
#include "Fruit.h"
#include "Vegetable.h"

using namespace std;

int main() {

    vector<Items*> listItems;

    Items* item1 = new Items("mop", 10);
    Items* item2 = new Items("detergent", 20);
//    item1.printItem();
//    item2.printItem();
//    ProduceItem prod1("grape", 20, "10/25/2023");
////    ProduceItem prod2("apple", 20, "10/30/2023");
    ProduceItem* prod1 = new ProduceItem("grape", 20, 1);
    ProduceItem* prod2 = new ProduceItem("apple", 20, 5);
//    prod1.printItem();
//    prod2.printItem();
    Fruit* fruit1 = new Fruit("grades", 20, 5, false);
    Fruit* fruit2 = new Fruit("apple", 10, 5, true);
//    fruit1.printItem();
//    fruit2.printItem();
    Vegetable* veg1 = new Vegetable("celery", 2, 5, false);
    Vegetable* veg2 = new Vegetable("broccoli", 5, 10, false);


    listItems.push_back(item1);
    listItems.push_back(item2);
    listItems.push_back(prod1);
    listItems.push_back(prod2);
    listItems.push_back(fruit1);
    listItems.push_back(fruit2);
    listItems.push_back(veg1);
    listItems.push_back(veg2);

    cout << "++++++++++++++++++++" << endl;
    for (size_t i=0; i<listItems.size(); i++) {
        listItems.at(i)->printItem();
    }
}
