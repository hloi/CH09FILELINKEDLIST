//
// Created by hloi on 10/24/2023.
//

#ifndef CH09FILELINKEDLIST_VEGETABLE_H
#define CH09FILELINKEDLIST_VEGETABLE_H
#include <string>
#include "ProduceItem.h"

using std::string;

class Vegetable : public ProduceItem {
private:
    bool root;

public:
    Vegetable() {}

    Vegetable(string name, int quantity, int expDate, bool root);
    void printItem() override;


};


#endif //CH09FILELINKEDLIST_VEGETABLE_H
