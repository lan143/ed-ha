#pragma once

#include <Arduino.h>

namespace EDHA
{
    typedef const char DeviceClass;

    // Binary sensor
    const DeviceClass deviceClassBinarySensorProblem[] = "problem";
    const DeviceClass deviceClassBinarySensorHeat[] = "heat";

    // Button
    const DeviceClass deviceClassButtonRestart[] = "restart";

    // Cover
    const DeviceClass deviceClassCoverNone[] = "none";
    const DeviceClass deviceClassCoverAwning[] = "awning";
    const DeviceClass deviceClassCoverBlind[] = "blind";
    const DeviceClass deviceClassCoverCurtain[] = "curtain";
    const DeviceClass deviceClassCoverDamper[] = "damper";
    const DeviceClass deviceClassCoverDoor[] = "door";
    const DeviceClass deviceClassCoverGarage[] = "garage";
    const DeviceClass deviceClassCoverGate[] = "gate";
    const DeviceClass deviceClassCoverShade[] = "shade";
    const DeviceClass deviceClassCoverShutter[] = "shutter";
    const DeviceClass deviceClassCoverWindow[] = "window";

    // Sensor
    const DeviceClass deviceClassSensorAQI[] = "aqi";
    const DeviceClass deviceClassSensorHumidity[] = "humidity";
    const DeviceClass deviceClassSoundPressure[] = "sound_pressure";
    const DeviceClass deviceClassSensorPowerFactor[] = "power_factor";
    const DeviceClass deviceClassSensorTemperature[] = "temperature";
}
