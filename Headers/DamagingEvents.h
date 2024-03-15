
#ifndef VERSATILGAMEPROJECT_DAMAGINGEVENTS_H
#define VERSATILGAMEPROJECT_DAMAGINGEVENTS_H

#include "Events.h"

class DamagingEvents : public Events{
protected:
    uint32_t NormalDamage;
    [[nodiscard]] uint32_t DamageCalculator(float WeaknessCoefficiency) const;
public:
    explicit DamagingEvents(uint32_t NormalDamage) : NormalDamage(NormalDamage) {};

    virtual void DisplayEventType() = 0;
};
#endif //VERSATILGAMEPROJECT_DAMAGINGEVENTS_H
