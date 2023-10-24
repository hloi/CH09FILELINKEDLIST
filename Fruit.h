//
// Created by hloi on 10/24/2023.
//

#ifndef CH09FILELINKEDLIST_FRUIT_H
#define CH09FILELINKEDLIST_FRUIT_H
#include "ProduceItem.h"

class Fruit : ProduceItem {
private:
    bool seed;
public:
    Fruit();
    Fruit(string name, int quantity, int expDate, bool seed);
    
};


#endif //CH09FILELINKEDLIST_FRUIT_H
