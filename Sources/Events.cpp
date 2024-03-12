#include <random>
#include "Events.h"

uint32_t Events::Odd(uint32_t a, uint32_t b) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution dis(a, b);
    return dis(gen);
}