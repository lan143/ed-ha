#pragma once

#include <Arduino.h>

namespace EDHA
{
    typedef const char Mode;

    // Binary sensor
    const Mode modeOff[] = "off";
    const Mode modeHeat[] = "heat";
    const Mode modeGas[] = "gas";
}