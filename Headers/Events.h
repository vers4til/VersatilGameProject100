#ifndef VERSATILGAMEPROJECT_EVENTS_H
#define VERSATILGAMEPROJECT_EVENTS_H

#include <iostream>
#include "Ships.h"

class Events {
public:
    Events() = default;

    virtual void EventStarter(std::shared_ptr<Ships> Ship) = 0;

    static uint32_t Odd(uint32_t a, uint32_t b);

    virtual ~Events() = default;
};

#endif //VERSATILGAMEPROJECT_EVENTS_H
