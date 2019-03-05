#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>

#include "ItemDrop.h"

using std::cout;
using std::string;

class Monster {
  private:
    string _name;
    double _maxHealth = 100;
    double _health;
    double _attack;
    int _value;

  protected:
    void setMaxHealth(double health) {
      _maxHealth = health;
    }
    void setAttack(double damage) {
      _attack = damage;
    }
    void setName(string name) {
      _name = name;
    }
    void fullHeal() {
      _health = _maxHealth;
    }
    void setValue(int value) {
      _value = value;
    }

  public:
    Monster() {};
    void hit(double damage) {
      _health -= damage;

      cout << "Monster Health: " << _health << "/" << _maxHealth << '\n';

      if (_health <= 0) {
        kill();

        ItemDrop item;
        item.generateItem(_value);
      }
    }
    string getName() {
      return _name;
    }
    double getMaxHealth() {
      return _maxHealth;
    }
    double getHealth() {
      return _health;
    }
    double getAttack() {
      return _attack;
    }
    void kill() {
      _health = 0;
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
};

#endif // MONSTER_H