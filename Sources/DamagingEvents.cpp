#include "DamagingEvents.h"

float DamagingEvents::DamageCalculator(float WeaknessCoefficient) const {
    float AlinacakHasar{0};
    AlinacakHasar += static_cast<float>(NormalDamage) * WeaknessCoefficient;
    return AlinacakHasar;
}