
#ifndef VERSATILGAMEPROJECT_DAMAGINGEVENTS_H
#define VERSATILGAMEPROJECT_DAMAGINGEVENTS_H

#include "Events.h"

class DamagingEvents : public Events{
protected:
    uint32_t NormalDamage;
    [[nodiscard]] float DamageCalculator(float StrengthCoefficiency) const;
public:
    explicit DamagingEvents(uint32_t NormalDamage) : NormalDamage(NormalDamage) {};

    virtual void DisplayEventType() = 0;
};
#endif //VERSATILGAMEPROJECT_DAMAGINGEVENTS_H
