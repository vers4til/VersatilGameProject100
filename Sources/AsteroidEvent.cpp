#include "AsteroidEvent.h"
#include "Ships.h"
#include "GeneralFunctions.h"

constexpr int EVENTCYCLE{3};

void AsteroidEvent::EventStarter(std::shared_ptr<Ships> Ship) {
    Susleme();
    std::cout << "\nAsteroid Eventi basladi!\n";
    DisplayEventType();
    WaitBetweenCodes(3);
    int i{0};
    for (; i < EVENTCYCLE; ++i) {
        CalculateEscapeChance(Ship);
    }
}

void AsteroidEvent::DisplayEventType() {
    std::cout << "Asteroid Eventi size hasar verebilir.\n";
}

void AsteroidEvent::CalculateEscapeChance(const std::shared_ptr<Ships> &Ship) {
    uint32_t chance = Odd(1, 100);
    WaitBetweenCodes(3);
    Susleme();
    std::cout << "\nHasar alma olasiligi hesaplaniyor...\n";
    WaitBetweenCodes(3);
    if (chance <= Ship->GetEscapeProbability()) {
        std::cout << "Hasar almadiniz!\n";
        Susleme();
    } else {
        uint32_t AlinacakHasar = DamageCalculator(Ship->GetWeaknessCo());
        if(Ship->GetHealth() > AlinacakHasar) {
            Ship->SetHealth(DamageCalculator(Ship->GetWeaknessCo()));
            std::cout << AsteroidEvent::DamageCalculator(Ship->GetWeaknessCo()) << " hasar aldiniz!\n";
        } else
            Ship->SetHealth(Ship->GetHealth());
        Susleme();
    }
}