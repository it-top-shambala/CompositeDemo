#ifndef COMPOSITEDEMO_AITEM_H
#define COMPOSITEDEMO_AITEM_H

#include <string>

using namespace std;

enum ItemType {
    Element, Box
};

class AItem {
private:
    string _name;
    ItemType _type;

protected:
    AItem(const string &name, ItemType type) : _name(name), _type(type) {}
    virtual ~AItem() = default;

public:
    const string &getName() const {
        return _name;
    }

    ItemType getType() const {
        return _type;
    }
};


#endif //COMPOSITEDEMO_AITEM_H
