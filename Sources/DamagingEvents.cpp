#include "DamagingEvents.h"

uint32_t DamagingEvents::DamageCalculator(float WeaknessCoefficient) const {
    float AlinacakHasar{0};
    AlinacakHasar += static_cast<float>(NormalDamage) * WeaknessCoefficient;
    return static_cast<uint32_t>(AlinacakHasar);
}