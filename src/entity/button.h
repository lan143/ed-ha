#pragma once

#include <Arduino.h>
#include "base_entity.h"
#include "enum/device_class.h"

namespace EDHA
{
    class Button :public Base
    {
    public:
        Button(
            Device* device,
            std::string prefix,
            std::string objectID,
            std::string uniqueID
        ) : Base(device, "button", prefix, objectID, uniqueID) { }

        std::string marshalJSON();
    
        Button* setDeviceClass(DeviceClass* deviceClass)
        {
            _deviceClass = deviceClass;
            return this;
        }
    
        Button* setCommandTopic(std::string commandTopic)
        {
            _commandTopic = commandTopic;
            return this;
        }
    
        Button* setCommandTemplate(std::string commandTemplate)
        {
            _commandTemplate = commandTemplate;
            return this;
        }
    
        Button* setPayloadPress(std::string payloadPress)
        {
            _payloadPress = payloadPress;
            return this;
        }
    
    private:
        DeviceClass* _deviceClass = NULL;
        std::string _commandTopic = "";
        std::string _commandTemplate = "";
        std::string _payloadPress = "";
    };
}
