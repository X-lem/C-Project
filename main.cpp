#include <iostream>
#include <string>

#include "Characters/CharacterHeaders.h"
#include "Monsters/MonsterHeaders.h"
#include "Items/ItemHeaders.h"

#include "ItemDrop.h"

using std::cout;
using std::string;

int main() {
  Titus titus;

  Sword s;

  titus.setEquipedWeapon(s);

  PeaPod p;
  p.hit(titus.getAttack());

  p.logInfo();

  Shield sh;

  titus.dropWeapon();
  titus.setEquipedArmor(sh);

  PeaPod p2;
  p2.hit(titus.getAttack());

  titus.hit(p2.getAttack());
  titus.logInfo();

  return 0;
}