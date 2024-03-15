#ifndef VERSATILGAMEPROJECT_NORMALSHIP_H
#define VERSATILGAMEPROJECT_NORMALSHIP_H

#include "Ships.h"

class NormalShip : public Ships {
public:
    NormalShip() = default;
    NormalShip(uint32_t CurrentHealthLevel, uint32_t CurrentBalance, uint32_t CurrentFuelLevel, uint32_t EscapeProbability,float WeaknessCoefficient)
    : Ships(CurrentHealthLevel, CurrentBalance, CurrentFuelLevel, EscapeProbability, WeaknessCoefficient) {}
    inline void DisplayName() override{
        std::cout << "Normal Gemiyi Sectiniz!\n";
    }
};


#endif //VERSATILGAMEPROJECT_NORMALSHIP_H
