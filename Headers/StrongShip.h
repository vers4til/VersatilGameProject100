#ifndef VERSATILGAMEPROJECT_STRONGSHIP_H
#define VERSATILGAMEPROJECT_STRONGSHIP_H

#include "Ships.h"

class StrongShip : public Ships {
public:
    StrongShip() = default;

    StrongShip(uint32_t CurrentHealthLevel, uint32_t CurrentBalance, uint32_t CurrentFuelLevel,
               uint32_t EscapeProbability, float WeaknessCoefficient)
            : Ships(CurrentHealthLevel, CurrentBalance, CurrentFuelLevel, EscapeProbability, WeaknessCoefficient) {}

    void DisplayName() override {
        std::cout << "Guclu Gemiyi Sectiniz!\n";
    }
};

#endif //VERSATILGAMEPROJECT_STRONGSHIP_H
