#ifndef PEA_POD_H
#define PEA_POD_H

#include "Monster.h"

class PeaPod : public Monster {
  private:

  public:
    PeaPod() {
      setMaxHealth(50);
      fullHeal();
      setName("PeaPod");
      setAttack(5);
      setValue(10);
    }
};

#endif // PEA_POD_H