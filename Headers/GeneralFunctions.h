#ifndef VERSATILGAMEPROJECT_GENERALFUNCTIONS_H
#define VERSATILGAMEPROJECT_GENERALFUNCTIONS_H

#include "Ships.h"
#include <thread>
#include <chrono>

inline void WaitBetweenCodes(uint32_t second){
    std::this_thread::sleep_for(std::chrono::seconds(second));
}
inline void Susleme(){
    std::cout << "\n***************************************\n";
}
void EventCount(const std::shared_ptr<Ships>& Ship);
std::unique_ptr<Ships> GemiSecimi();
void RandomEventGenerate(std::shared_ptr<Ships>);
void PuanHesabi(uint32_t CurrentHealthLevel, uint32_t CurrentBalance, uint32_t CurrentFuelLevel);

#endif //VERSATILGAMEPROJECT_GENERALFUNCTIONS_H
