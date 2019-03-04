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
  Samuel sam;

  sam.hit(titus.getDamage());
  sam.logInfo();

  PeaPod p;
  p.hit(sam.getDamage());
  p.hit(sam.getDamage());
  p.hit(sam.getDamage());

  p.logInfo();

  return 0;
}