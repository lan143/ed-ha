#pragma once

#include <Arduino.h>

namespace EDHA
{
    enum Mode {
        // Generic
        MODE_OFF,

        // HVAC
        MODE_AUTO,
        MODE_COOL,
        MODE_HEAT,
        MODE_DRY,
        MODE_FAN_ONLY,

        // Water heater
        MODE_ECO,
        MODE_ELECTRIC,
        MODE_GAS,
        MODE_HEAT_PUMP,
        MODE_HIGH_DEMAND,
        MODE_PERFORMANCE
    };

    extern std::string mapMode(Mode mode);
}
