//
// Created by hloi on 10/24/2023.
//

#ifndef CH09FILELINKEDLIST_ITEMS_H
#define CH09FILELINKEDLIST_ITEMS_H
#include <string>

using std::string;

class Items {
private:
    string itemName;
    int itemQuantity;
public:
    Items() {}

    Items(string name, int quantity);

    const string &getItemName() const;

    void setItemName(const string &itemName);

    int getItemQuantity() const;

    void setItemQuantity(int itemQuantity);

    void printItem();

};


#endif //CH09FILELINKEDLIST_ITEMS_H
