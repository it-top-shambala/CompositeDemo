#ifndef COMPOSITEDEMO_ITEM_H
#define COMPOSITEDEMO_ITEM_H

#include "AItem.h"

class Item : public AItem {
public:
    explicit Item(const string &name) : AItem(name, ItemType::Element) {}
};


#endif //COMPOSITEDEMO_ITEM_H
