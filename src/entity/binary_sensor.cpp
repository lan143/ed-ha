#include <Json.h>
#include "binary_sensor.h"

std::string EDHA::BinarySensor::marshalJSON()
{
    return EDUtils::buildJson([this](JsonObject entity) {
        buildBaseField(entity);

        if (_deviceClass) {
            entity[F("device_class")] = _deviceClass;
        }

        if (_stateTopic.length() > 0) {
            entity[F("state_topic")] = _stateTopic;
        }

        if (_valueTemplate.length() > 0) {
            entity[F("value_template")] = _valueTemplate;
        }

        if (_payloadOn.length() > 0) {
            entity[F("payload_on")] = _payloadOn;
        }

        if (_payloadOff.length() > 0) {
            entity[F("payload_off")] = _payloadOff;
        }
    });
}
