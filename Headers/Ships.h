#ifndef VERSATILGAMEPROJECT_SHIPS_H
#define VERSATILGAMEPROJECT_SHIPS_H

#include <iostream>
#include <cstdint>

class Ships{
protected:
    uint32_t m_CurrentHealthLevel{};
    uint32_t m_CurrentBalance{};
    uint32_t m_CurrentFuelLevel{};
    uint32_t m_EscapeProbability{};
    float m_WeaknessCoefficient{};


public:
    Ships() = default;
    Ships(uint32_t CurrentHealthLevel, uint32_t CurrentBalance, uint32_t CurrentFuelLevel, uint32_t EscapeProbability, float WeaknessCoefficient)
    : m_CurrentHealthLevel(CurrentHealthLevel),
    m_CurrentBalance(CurrentBalance),
    m_CurrentFuelLevel(CurrentFuelLevel),
    m_EscapeProbability(EscapeProbability),
    m_WeaknessCoefficient(WeaknessCoefficient){}

    virtual void DisplayName() = 0;

    virtual ~Ships() = default;

    inline void SetHealth(const uint32_t TakenDamage) {
        m_CurrentHealthLevel -= TakenDamage;
    }

    inline void SetFuel(const uint32_t FuelChange) {
        m_CurrentFuelLevel -= FuelChange;
    }

    inline void SetBalance(const uint32_t BalanceChange) {
//    balance can increase or decrease, so we put +. if it will decrease we will send parameter negative.
        m_CurrentBalance += BalanceChange;
    }

    [[nodiscard]] inline uint32_t GetHealth() const {
        return m_CurrentHealthLevel;
    }

    [[nodiscard]] inline uint32_t GetFuel() const {
        return m_CurrentFuelLevel;
    }

    [[nodiscard]] inline uint32_t GetBalance() const {
        return m_CurrentBalance;
    }

    [[nodiscard]] inline uint32_t GetEscapeProbability() const {
        return m_EscapeProbability;
    }

    [[nodiscard]] inline float GetWeaknessCo() const {
        return m_WeaknessCoefficient;
    }
};

#endif //VERSATILGAMEPROJECT_SHIPS_H
