//
// Created by hloi on 10/24/2023.
//

#ifndef CH09FILELINKEDLIST_PRODUCEITEM_H
#define CH09FILELINKEDLIST_PRODUCEITEM_H
#include "Items.h"

class ProduceItem : public Items {
private:
//    string expDate;
int expDate;
public:
    ProduceItem() {}

    ProduceItem(string name, int quantity, int expDate);

    const int &getExpDate() const;

    void setExpDate(const int &expDate);

    void printItem();
};


#endif //CH09FILELINKEDLIST_PRODUCEITEM_H
