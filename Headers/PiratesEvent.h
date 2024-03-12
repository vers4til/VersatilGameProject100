
#ifndef VERSATILGAMEPROJECT_PIRATESEVENT_H
#define VERSATILGAMEPROJECT_PIRATESEVENT_H

#include "DamagingEvents.h"
#include "Ships.h"

#include <iostream>

class PiratesEvent : public DamagingEvents {
private:
    uint32_t GerekliYakit{33};
public:
    PiratesEvent() : DamagingEvents(30) {};

    void EventStarter(std::shared_ptr<Ships> Ship) override;

    void DisplayEventType() override;

    void ChoiceResults(const std::shared_ptr<Ships> &Ship);
};

#endif //VERSATILGAMEPROJECT_PIRATESEVENT_H
