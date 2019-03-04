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

  titus.setEquipedItem(s);

  PeaPod p;
  p.hit(titus.getDamage());

  p.logInfo();

  titus.dropItem();

  PeaPod p2;
  p2.hit(titus.getDamage());


  return 0;
}