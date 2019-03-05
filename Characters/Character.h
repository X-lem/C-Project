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

    Weapon _equipedWeapon;
    bool _isWeaponEquiped = false;

    Armor _equipedArmor;
    bool _isArmorEquiped = false;

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

  public:
    Character() {};
    void hit(double damage) {
      if (_isArmorEquiped){
        _health -= (damage - _equipedArmor.getprotection());
      }
      else {
        _health -= damage;
      }
    }
    string getName() {
      return _name;
    }
    double getHealth() {
      return _health;
    }
    double getAttack() {
      if (_isWeaponEquiped) {
        return _equipedWeapon.getAttack();
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

    void setEquipedWeapon(Weapon item) {
      _isWeaponEquiped = true;
      _equipedWeapon = item;
    }
    void dropWeapon() {
      _isWeaponEquiped = false;
    }

    void setEquipedArmor(Armor item) {
      _isArmorEquiped = true;
      _equipedArmor = item;
    }
    void dropArmor() {
      _isArmorEquiped = false;
    }
};

#endif // CHARACTER_H