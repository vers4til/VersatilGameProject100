#ifndef VERSATILGAMEPROJECT_ABANDONEDEVENT_H
#define VERSATILGAMEPROJECT_ABANDONEDEVENT_H

#include "Events.h"
#include <iostream>
#include "GeneralFunctions.h"

class AbandonedEvent : public Events {
private:
    uint32_t BalanceChange{10};
public:
    AbandonedEvent() = default;

    void EventStarter(std::shared_ptr<Ships> Ship) override;

    void OddOfPirates(const std::shared_ptr<Ships> &Ship) const;

};

#endif //VERSATILGAMEPROJECT_ABANDONEDEVENT_H
