#include <Json.h>
#include "climate.h"

std::string EDHA::Climate::marshalJSON()
{
    return EDUtils::buildJson([this](JsonObject entity) {
        buildBaseField(entity);

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

        if (_temperatureCommandTemplate.length() > 0) {
            entity[F("temperature_command_template")] = _temperatureCommandTemplate;
        }

        if (_temperatureCommandTopic.length() > 0) {
            entity[F("temperature_command_topic")] = _temperatureCommandTopic;
        }

        if (_temperatureStateTemplate.length() > 0) {
            entity[F("temperature_state_template")] = _temperatureStateTemplate;
        }

        if (_temperatureStateTopic.length() > 0) {
            entity[F("temperature_state_topic")] = _temperatureStateTopic;
        }

        if (_modes.size() > 0) {
            JsonArray modes = entity.createNestedArray(F("modes"));
            int i = 0;
            for (auto mode : _modes) {
                switch (mode) {
                    case MODE_OFF:
                        modes[i] = "off";
                        break;
                    case MODE_HEAT:
                        modes[i] = "heat";
                        break;
                    case MODE_GAS:
                        modes[i] = "gas";
                        break;
                }
                    
                i++;
            }
        }

        if (_payloadOff.length() > 0) {
            entity[F("payload_off")] = _payloadOff;
        }

        if (_payloadOn.length() > 0) {
            entity[F("payload_on")] = _payloadOn;
        }

        if (_actionTemplate.length() > 0) {
            entity[F("action_template")] = _actionTemplate;
        }

        if (_actionTopic.length() > 0) {
            entity[F("action_topic")] = _actionTopic;
        }
    });
}
