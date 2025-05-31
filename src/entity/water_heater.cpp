#include <Json.h>
#include "water_heater.h"

std::string EDHA::WaterHeater::marshalJSON()
{
    return EDUtils::buildJson([this](JsonObject entity) {
        buildBaseField(entity);

        if (_modeCommandTemplate.length() > 0) {
            entity[F("mode_command_template")] = _modeCommandTemplate;
        }

        if (_modeCommandTopic.length() > 0) {
            entity[F("mode_command_topic")] = _modeCommandTopic;
        }

        if (_modeStateTemplate.length() > 0) {
            entity[F("mode_state_template")] = _modeStateTemplate;
        }

        if (_modeStateTopic.length() > 0) {
            entity[F("mode_state_topic")] = _modeStateTopic;
        }

        if (_currentTemperatureTemplate.length() > 0) {
            entity[F("current_temperature_template")] = _currentTemperatureTemplate;
        }

        if (_currentTemperatureTopic.length() > 0) {
            entity[F("current_temperature_topic")] = _currentTemperatureTopic;
        }

        if (_minTemp > 0) {
            entity[F("min_temp")] = _minTemp;
        }

        if (_maxTemp > 0) {
            entity[F("max_temp")] = _maxTemp;
        }

        if (_temperatureCommandTemplate.length() > 0) {
            entity[F("temperature_command_template")] = _temperatureCommandTemplate;
        }

        if (_temperatureCommandTopic.length() > 0) {
            entity[F("temperature_command_topic")] = _temperatureCommandTopic;
        }

        if (_modes.size() > 0) {
            JsonArray modes = entity.createNestedArray(F("modes"));

            for (auto mode : _modes) {
                switch (mode) {
                case MODE_OFF:
                    modes.add("off");
                    break;
                case MODE_HEAT:
                    modes.add("heat");
                    break;
                case MODE_GAS:
                    modes.add("gas");
                    break;
                }
            }
        }

        if (_initial > 0) {
            entity[F("initial")] = _initial;
        }

        if (_precision > 0) {
            entity[F("precision")] = _precision;
        }
    });
}
