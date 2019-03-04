#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

#include "Item.h"

class Weapon : public Item {
  private:
    double _range; // Might need to be int
    double _damage;

  protected:
    void setRange(double range) {
      _range = range;
    }
    void setDamage(double damage) {
      _damage = damage;
    }

  public:
    Weapon() {};
    double getRange() {
      return _range;
    }
    double getDamage() {
      return _damage;
    }
};

#endif // WEAPON_H