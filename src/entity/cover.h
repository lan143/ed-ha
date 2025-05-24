#pragma once


#include <Arduino.h>
#include <ArduinoJSON.h>
#include <ExtStrings.h>
#include "device.h"
#include "base_entity.h"
#include "enum/device_class.h"

namespace EDHA
{
    class Cover : public Base
    {
    public:
        Cover(
            Device* device,
            std::string prefix,
            std::string objectID,
            std::string uniqueID
        ) : Base(device, "cover", prefix, objectID, uniqueID) { }

        Cover* setDeviceClass(std::string deviceClass)
        {
            _deviceClass = deviceClass;
            return this;
        }

        Cover* setCommandTopic(std::string commandTopic)
        {
            _commandTopic = commandTopic;
            return this;
        }

        Cover* setStateTopic(std::string stateTopic)
        {
            _stateTopic = stateTopic;
            return this;
        }

        Cover* setValueTemplate(std::string valueTemplate)
        {
            _valueTemplate = valueTemplate;
            return this;
        }

        Cover* setPayloadClose(std::string payloadClose)
        {
            _payloadClose = payloadClose;
            return this;
        }

        Cover* setPayloadOpen(std::string payloadOpen)
        {
            _payloadOpen = payloadOpen;
            return this;
        }

        Cover* setPayloadStop(std::string payloadStop)
        {
            _payloadStop = payloadStop;
            return this;
        }

        std::string marshalJSON() override;

    private:
        std::string _deviceClass = "";
        std::string _commandTopic = "";
        std::string _stateTopic = "";
        std::string _valueTemplate = "";
        std::string _payloadClose = "";
        std::string _payloadOpen = "";
        std::string _payloadStop = "";
    };
}
