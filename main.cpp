#include "GeneralFunctions.h"

int main() {
    std::shared_ptr<Ships> SecilenGemi = GemiSecimi();
    EventCount(SecilenGemi);
    PuanHesabi(SecilenGemi->GetHealth(), SecilenGemi->GetBalance(), SecilenGemi->GetFuel());
}
