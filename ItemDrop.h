#ifndef ITEM_DROP_H
#define ITEM_DROP_H

#include <iostream>
#include <string>

#include "Items/ItemHeaders.h"

using std::cout;
using std::string;

class ItemDrop {

  public:
    ItemDrop() {};
    ItemDrop(int value) {
      generateItem(value);
    };

    void generateItem(int value) {

      // Nothing - Coin
      if (value <= 10) {
        srand(time(0));
        int num = rand() % 2;
        string reward;
        cout << "Item Drop num: " << num << '\n';

        switch (num)
        {
          case 1:
            reward = dropGold();
            break;
          default:
            break;
        }

        cout << "Reward " << reward << '\n';
      }
      else if (value > 10 && value <= 50) {
        srand(time(0));
        int num = rand() % 3;
        string reward;
        cout << "Item Drop num: " << num << '\n';

        switch (num)
        {
          case 2:
          case 1:
            reward = dropCoin();
            break;
          default:
            break;
        }

        cout << "Reward " << reward << '\n';
      }
    }

    string dropCoin() {
      Coin c;
      return c.dropCoin();
    }

    string dropGold() {
      Gold g;
      return g.dropCoin();
    }
};

#endif // ITEM_DROP_H