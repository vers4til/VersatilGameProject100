#include "AbandonedEvent.h"
#include "PiratesEvent.h"
#include "GeneralFunctions.h"

void AbandonedEvent::EventStarter(std::shared_ptr<Ships> Ship) {
    Susleme();
    std::cout << "\nTerk edilmis Gezegen Eventi basladi!\n";
    WaitBetweenCodes(3);
    OddOfPirates(Ship);
}

void AbandonedEvent::OddOfPirates(const std::shared_ptr<Ships> &Ship) const {
    uint32_t chance = Odd(0, 1);
    std::cout << "Uzay Korsanlariyla karsilasma ihtimali hesaplaniyor...\n";
    WaitBetweenCodes(3);
    if (chance == 0) {
        Ship->SetBalance(BalanceChange);
        std::cout << BalanceChange << " altin kazandiniz!\n";
        WaitBetweenCodes(2);
        Susleme();
    } else if (chance == 1) {
        std::unique_ptr<PiratesEvent> Event = std::make_unique<PiratesEvent>();
        Event->EventStarter(Ship);
    }
}
