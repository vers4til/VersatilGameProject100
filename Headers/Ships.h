#ifndef VERSATILGAMEPROJECT_SHIPS_H
#define VERSATILGAMEPROJECT_SHIPS_H

#include <iostream>

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

     void SetHealth(float TakenDamage) ;
     void SetFuel(uint32_t FuelChange);
     void SetBalance(uint32_t BalanceChange);
    [[nodiscard]] uint32_t GetHealth() const;
    [[nodiscard]] uint32_t GetFuel() const;
    [[nodiscard]] uint32_t GetBalance() const;
    [[nodiscard]] uint32_t GetEscapeProbability() const;
    [[nodiscard]] float GetWeaknessCo() const;
    virtual void DisplayName() = 0;
    virtual ~Ships() = default;
};

#endif //VERSATILGAMEPROJECT_SHIPS_H
