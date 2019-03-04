#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include "Items/ItemHeaders.h"

using std::cout;
using std::string;

class Character {
  private:
    string _name;
    double _maxHealth;
    double _health;
    double _attack = 15;

    Weapon _equipedItem;
    bool isItemEquiped = false;

  protected:
    void setMaxHealth(double health) {
      _maxHealth = health;
    }
    void setDamage(double damage) {
      _attack = damage;
    }
    void setName(string name) {
      _name = name;
    }
    void fullHeal() {
      _health = _maxHealth;
    }

  public:
    Character() {};
    void hit(double damage) {
      _health -= damage;
    }
    string getName() {
      return _name;
    }
    double getHealth() {
      return _health;
    }
    double getDamage() {

      if (isItemEquiped) {
        return _equipedItem.getDamage();
      } else {
        return _attack;
      }

    }
    void logInfo() {
      cout << _name << " " << _health << "/" << _maxHealth << '\n';
    }
    bool isLiving() {
      if (_health <= 0) {
        return false;
      }
      return true;
    }

    void setEquipedItem(Weapon item) {
      isItemEquiped = true;
      _equipedItem = item;
    }
    void dropItem() {
      isItemEquiped = false;
    }
};

#endif // CHARACTER_H