#include <Json.h>
#include "button.h"

std::string EDHA::Button::marshalJSON()
{
    return EDUtils::buildJson([this](JsonObject entity) {
        buildBaseField(entity);

        if (_deviceClass) {
            entity[F("device_class")] = _deviceClass;
        }

        if (_commandTopic.length() > 0) {
            entity[F("command_topic")] = _commandTopic;
        }

        if (_commandTemplate.length() > 0) {
            entity[F("command_template")] = _commandTemplate;
        }

        if (_payloadPress.length() > 0) {
            entity[F("payload_press")] = _payloadPress;
        }
    });
}
