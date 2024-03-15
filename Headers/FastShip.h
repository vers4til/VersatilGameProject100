#ifndef VERSATILGAMEPROJECT_FASTSHIP_H
#define VERSATILGAMEPROJECT_FASTSHIP_H

#include "Ships.h"

class FastShip : public Ships{
public:
    FastShip(uint32_t CurrentHealthLevel, uint32_t CurrentBalance, uint32_t CurrentFuelLevel, uint32_t EscapeProbability, float WeaknessCoefficient)
    : Ships(CurrentHealthLevel, CurrentBalance, CurrentFuelLevel, EscapeProbability, WeaknessCoefficient){}
    inline void DisplayName() override{
        std::cout << "Hızlı gemiyi seçtiniz!\n";
    }
};

#endif //VERSATILGAMEPROJECT_FASTSHIP_H
