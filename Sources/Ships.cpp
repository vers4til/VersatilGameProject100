#include "Ships.h"

void Ships::SetHealth(const uint32_t TakenDamage) {
    m_CurrentHealthLevel -= TakenDamage;
}

void Ships::SetFuel(const uint32_t FuelChange) {
    m_CurrentFuelLevel -= FuelChange;
}

void Ships::SetBalance(const uint32_t BalanceChange) {
//    balance can increase or decrease, so we put +. if it will decrease we will send parameter negative.
    m_CurrentBalance += BalanceChange;
}

uint32_t Ships::GetHealth() const {
    return m_CurrentHealthLevel;
}

uint32_t Ships::GetFuel() const {
    return m_CurrentFuelLevel;
}

uint32_t Ships::GetBalance() const {
    return m_CurrentBalance;
}

uint32_t Ships::GetEscapeProbability() const {
    return m_EscapeProbability;
}

float Ships::GetWeaknessCo() const {
    return m_WeaknessCoefficient;
}