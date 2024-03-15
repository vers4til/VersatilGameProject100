#include "Ships.h"
#include "AsteroidEvent.h"
#include "AbandonedEvent.h"
#include "PiratesEvent.h"
#include "FastShip.h"
#include "StrongShip.h"
#include "NormalShip.h"
#include "Events.h"
#include <iostream>
#include <random>
#include <utility>

constexpr int EVENTNUMBER{3}; // for 3 different events
constexpr int EVENTCOUNTER{5}; //events will be called 5 times

uint32_t RandomNumberGenerator(uint32_t a, uint32_t b) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution dis(a, b);
    return dis(gen);
}

void EventCount(const std::shared_ptr<Ships> &SecilenGemi) {
    int i{0};
    for (; i < EVENTCOUNTER; ++i) {
        RandomEventGenerate(SecilenGemi);
        std::cout << "\nEvent sonu gunccel saglik seviyeniz: " << SecilenGemi->GetHealth() << "\n";
        WaitBetweenCodes(1);
        std::cout << "Event sonu guncel para miktariniz: " << SecilenGemi->GetBalance() << "\n";
        WaitBetweenCodes(1);
        std::cout << "Event sonu guncel yakit seviyeniz: " << SecilenGemi->GetFuel() << "\n";
        WaitBetweenCodes(5);
        if (SecilenGemi->GetFuel() == 0 || SecilenGemi->GetHealth() == 0)
            break;
    }
}

void RandomEventGenerate(std::shared_ptr<Ships> SecilenGemi) {
    uint32_t Event = RandomNumberGenerator(1, EVENTNUMBER);
    std::unique_ptr<Events> EventSecimi;
    if (Event == 1)
        EventSecimi = std::make_unique<AsteroidEvent>();
    else if (Event == 2)
        EventSecimi = std::make_unique<AbandonedEvent>();
    else if (Event == 3)
        EventSecimi = std::make_unique<PiratesEvent>();
    EventSecimi->EventStarter(std::move(SecilenGemi));
}

std::unique_ptr<Ships> GemiSecimi() {
    uint32_t GemiSecimi{0};
    volatile uint32_t check;
    Susleme();
    std::cout << "\n  VERSATIL GAMES INC. GURURLA SUNAR \n";
    Susleme();
    WaitBetweenCodes(3);
    std::cout << "\nOyuna baslamak icin geminizi secin: \n";
    WaitBetweenCodes(1);
    std::unique_ptr<Ships> GemiAtamasi;
    do {
        std::cout << "1. Normal Gemi\n";
        WaitBetweenCodes(1);
        std::cout << "2. Hizli Gemi\n";
        WaitBetweenCodes(1);
        std::cout << "3. Guclu Gemi\n";
        WaitBetweenCodes(1);
        std::cout << "Seciminiz: ";

        std::cin >> GemiSecimi;


        switch (GemiSecimi) {
            case 1:
                GemiAtamasi = std::make_unique<NormalShip>(100, 0, 99, 50, 1);
                check = 1;
                break;

            case 2:
                GemiAtamasi = std::make_unique<FastShip>(100, 0, 99, 75, 1.5);
                check = 1;
                break;

            case 3:
                GemiAtamasi = std::make_unique<StrongShip>(100, 0, 99, 25, 0.5);
                check = 1;
                break;

            default:
                std::cout << "\nLutfen gecerli bir secim yapin. \n";
                WaitBetweenCodes(2);
                check = 0;
        }
    } while (check == 0);
    GemiAtamasi->DisplayName();
    Susleme();
    std::cout << "\nOyun baslangici saglik seviyeniz: " << GemiAtamasi->GetHealth() << "\n";
    WaitBetweenCodes(1);
    std::cout << "Oyun baslangici para miktariniz: " << GemiAtamasi->GetBalance() << "\n";
    WaitBetweenCodes(1);
    std::cout << "Oyun baslangici yakit seviyeniz: " << GemiAtamasi->GetFuel() << "\n";
    WaitBetweenCodes(5);
    return GemiAtamasi;
}

void PuanHesabi(const uint32_t CurrentHealthLevel, const uint32_t CurrentBalance, const uint32_t CurrentFuelLevel) {
    volatile uint32_t TotalPuan;
    uint32_t SaglikKatsayisi{10};
    uint32_t YakitKatsayisi{5};
    uint32_t ParaKatsayisi{10};

    TotalPuan = CurrentHealthLevel * SaglikKatsayisi + CurrentBalance * ParaKatsayisi + CurrentFuelLevel * YakitKatsayisi;

    Susleme();
    std::cout << "\n Oyun bitti, oyun sonu puaniniz: \n" << "               " << TotalPuan << "\n";
    Susleme();
}
