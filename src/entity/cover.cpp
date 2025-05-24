#include <Json.h>
#include "cover.h"

std::string EDHA::Cover::marshalJSON()
{
    return EDUtils::buildJson([this](JsonObject entity) {
        buildBaseField(entity);

        if (_deviceClass.length() > 0) {
            entity[F("device_class")] = _deviceClass;
        }

        if (_commandTopic.length() > 0) {
            entity[F("command_topic")] = _commandTopic;
        }

        if (_stateTopic.length() > 0) {
            entity[F("state_topic")] = _stateTopic;
        }

        if (_valueTemplate.length() > 0) {
            entity[F("value_template")] = _valueTemplate;
        }

        if (_payloadClose.length() > 0) {
            entity[F("payload_close")] = _payloadClose;
        }

        if (_payloadOpen.length() > 0) {
            entity[F("payload_open")] = _payloadOpen;
        }

        if (_payloadStop.length() > 0) {
            entity[F("payload_stop")] = _payloadStop;
        }

        entity[F("platform")] = "cover";
    });
}
