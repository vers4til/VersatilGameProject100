#ifndef VERSATILGAMEPROJECT_ASTEROIDEVENT_H
#define VERSATILGAMEPROJECT_ASTEROIDEVENT_H

#include "DamagingEvents.h"
#include "Ships.h"
#include <iostream>
class AsteroidEvent : public DamagingEvents{
public:

    AsteroidEvent() : DamagingEvents(10) {};
    void EventStarter(std::shared_ptr<Ships> Ship) override;
    void DisplayEventType() override;
    void CalculateEscapeChance(const std::shared_ptr<Ships>& Ship);
};

#endif //VERSATILGAMEPROJECT_ASTEROIDEVENT_H
