#pragma once

#include <Arduino.h>
#include "base.h"
#include "enum/device_class.h"

namespace EDHA
{
    class Button : Base
    {
    public:
        Cover(
            Device* device,
            std::string prefix,
            std::string objectID,
            std::string uniqueID
        ) : Base(device, "button", prefix, objectID, uniqueID) { }

        std::string marshalJSON();
    
        Cover* setDeviceClass(DeviceClass deviceClass)
        {
            _deviceClass = deviceClass;
            return this;
        }
    
        Cover* setCommandTopic(std::string commandTopic)
        {
            _commandTopic = commandTopic;
            return this;
        }
    
        Cover* setCommandTemplate(std::string commandTemplate)
        {
            _commandTemplate = commandTemplate;
            return this;
        }
    
        Cover* setPayloadPress(std::string payloadPress)
        {
            _payloadPress = payloadPress;
            return this;
        }
    
    private:
        DeviceClass _deviceClass = NULL;
        std::string _commandTopic = "";
        std::string _commandTemplate = "";
        std::string _payloadPress = "";
    };
}
