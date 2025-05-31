#include "modes.h"

using namespace EDHA;

std::string EDHA::mapMode(Mode mode)
{
    switch (mode) {
        case MODE_OFF:
            return "off";
        case MODE_AUTO:
            return "auto";
        case MODE_COOL:
            return "cool";
        case MODE_HEAT:
            return "heat";
        case MODE_DRY:
            return "dry";
        case MODE_FAN_ONLY:
            return "fan_only";
        case MODE_ECO:
            return "eco";
        case MODE_ELECTRIC:
            return "electric";
        case MODE_GAS:
            return "gas";
        case MODE_HEAT_PUMP:
            return "heat_pump";
        case MODE_HIGH_DEMAND:
            return "high_demand";
        case MODE_PERFORMANCE:
            return "performance";
    }

    return "";
}
