#include <iostream>

#include "Item.h"
#include "List.h"

using namespace std;

void PrintList(List* list, int indent = 0);

int main() {
    List* root = new List("root");
    root->Add(new Item("item 1"));
    List* list = new List("list");
    list->Add(new Item("item 2"));
    list->Add(new Item("item 3"));
    List* list_2 = new List("list_2");
    list_2->Add(new Item("item 4"));
    list_2->Add(new Item("item 5"));
    list->Add(list_2);
    root->Add(list);

    PrintList(root);

    return 0;
}

void PrintList(List* list, int indent) {
    int count = indent;
    for (auto i : list->getList()) {
        for (int j = 0; j < indent; ++j) {
            cout << " ";
        }
        cout << i->getName() << endl;
        if (i->getType() == ItemType::Element) {
            continue;
        }
        if (i->getType() == ItemType::Box) {
            PrintList(dynamic_cast<List*>(i), ++count);
        }
    }
}