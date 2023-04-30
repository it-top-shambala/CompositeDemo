#ifndef COMPOSITEDEMO_LIST_H
#define COMPOSITEDEMO_LIST_H

#include <vector>

#include "AItem.h"

using namespace std;

class List : public AItem {
private:
    vector<AItem*> _list;

public:
    explicit List(const string &name) : AItem(name, ItemType::Box) {}

    void Add(AItem* item) {
        _list.push_back(item);
    }

    const vector<AItem *> getList() const {
        return _list;
    }
};


#endif //COMPOSITEDEMO_LIST_H
