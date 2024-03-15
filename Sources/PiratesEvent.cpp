#include "PiratesEvent.h"
#include <iostream>
#include "Ships.h"
#include "GeneralFunctions.h"

void PiratesEvent::EventStarter(std::shared_ptr<Ships> Ship) {
    Susleme();
    std::cout << "\nUzay Korsanlari Eventi basladi!\n";
    DisplayEventType();
    WaitBetweenCodes(3);
    ChoiceResults(Ship);
}

void PiratesEvent::DisplayEventType() {
    std::cout << "Uzay Korsanlari Eventi size hasar verebilir.\n";
    WaitBetweenCodes(1);
}

void PiratesEvent::ChoiceResults(const std::shared_ptr<Ships> &Ship) {
    uint32_t KararAtamasi{0};
    std::int32_t GecisUcreti_1{-10};
    std::int32_t GecisUcreti_2{-20};
    std::int32_t GecisUcreti_3{-30};
    std::int32_t GecisUcreti{0};
    while (true) {
        Susleme();
        std::cout << "\nKorsanlarla karsilastiniz, ne yapmak istediginizi secin: \n";
        WaitBetweenCodes(1);
        std::cout << "1. Kac!\n";
        WaitBetweenCodes(1);
        std::cout << "2. Savas!\n";
        WaitBetweenCodes(1);
        std::cout << "3. Pazarlik et!\n";
        WaitBetweenCodes(1);
        std::cout << "Seciminiz: ";
        std::cin >> KararAtamasi;

        if (KararAtamasi == 1) {

            if (Ship->GetFuel() < GerekliYakit) {
                std::cout << "Yakit yetersiz, kacamazsiniz.\n";
                WaitBetweenCodes(1);
            } else {
                std::cout << "Kacmayi sectiniz!\n";
                WaitBetweenCodes(1);

                uint32_t KacmaOlasiligi = Odd(1, 100);
                std::cout << "Kacma olasiligi hesaplaniyor...\n";
                WaitBetweenCodes(3);

                if (KacmaOlasiligi < Ship->GetEscapeProbability()) {
                    Ship->SetFuel(GerekliYakit);
                    std::cout << "Kacmayi basardiniz, 33 yakit azaldi.\n";
                    Susleme();
                    WaitBetweenCodes(2);
                    break;
                } else {
                    std::cout << "Kacmayi basaramadiniz!\n";
                    continue;
                }
            }

        } else if (KararAtamasi == 2) {
            std::cout << "Savasmayi sectiniz! \n";
            std::cout << "Savasi kazanma olasiligi hesaplaniyor... \n";
            WaitBetweenCodes(3);
            if (Odd(0, 1)) {
                std::cout << "Savasi kaybettiniz! \n";
                uint32_t AlinanHasar = DamageCalculator(Ship->GetWeaknessCo());
                if (Ship->GetHealth() > AlinanHasar) {
                    Ship->SetHealth(AlinanHasar);
                    std::cout << AlinanHasar << " hasar aldiniz.\n";
                } else
                    Ship->SetHealth(Ship->GetHealth());
                Susleme();
                break;
            } else {
                std::cout << "Savasi kazandiniz! \n";
                Susleme();
                WaitBetweenCodes(2);
                break;
            }

        } else if (KararAtamasi == 3) {
            std::cout << "Pazarlik etmeyi sectiniz! \n";
            std::cout << "Gecis ucreti olasiligi hesaplaniyor...\n";
            WaitBetweenCodes(3);
            uint32_t Pazarlik = Odd(1, 3);

            if (Pazarlik == 1)
                GecisUcreti = GecisUcreti_1;

            else if (Pazarlik == 2)
                GecisUcreti = GecisUcreti_2;

            else if (Pazarlik == 3)
                GecisUcreti = GecisUcreti_3;
            if (GecisUcreti < Ship->GetBalance()) {
                Ship->SetBalance(GecisUcreti);
                std::cout << "Korsanlar gecis ucreti olarak sizden " << (GecisUcreti * (-1)) << " altin aldi.\n";
                Susleme();
                WaitBetweenCodes(2);
                break;
            } else {
                std::cout << "Korsanlara verecek paraniz yok, kacmayi veya savasmayi secmelisiniz.\n";
            }
        } else {
            std::cout << "Lutfen gecerli bir secim yapin.\n";
        }
    }
}