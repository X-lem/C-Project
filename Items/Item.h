#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Item {
  private:
    string _name;

  protected:
    void setName(string name) {
      _name = name;
    }

  public:
    Item() {};
};

#endif // ITEM_H