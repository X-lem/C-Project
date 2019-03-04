#include <iostream>
#include <string>

#include "Character.h"
#include "Samuel.h"
#include "Titus.h"

#include "Monster.h"
#include "PeaPod.h"

#include "ItemDrop.h"
#include "Item.h"
#include "Coin.h"

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