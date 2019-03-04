#ifndef COIN_H
#define COIN_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

#include "Item.h"


using std::string;

class Coin : public Item {

  private:
    string _value;
  protected:
    void setValue(string value) {
      _value = value;
    }
  public:
    Coin() {
      srand(time(0));
      int num = rand() % 100 + 1;


      if (num <= 80) {
        _value = "Gold";
      } else if (num > 80 && num <= 95) {
        _value = "Platinum";
      } else {
        _value = "Diamond";
      }
    };

    string dropCoin() {
      return _value;
    }
};

class Gold : public Coin {
  private:
    string _name = "Gold";
  public:
    Gold() {
      setValue(_name);
    }
};

class Platinum : public Coin {
  private:
    string _name = "Platinum";
  public:
    Platinum() {
      setValue(_name);
    }
};

class Diamond : public Coin {
  private:
    string _name = "Diamond";
  public:
    Diamond() {
      setValue(_name);
    }
};

#endif // COIN_H