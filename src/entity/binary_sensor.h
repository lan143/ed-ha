#pragma once

#include <Arduino.h>
#include "base.h"
#include "enum/device_class.h"

namespace EDHA
{
    class BinarySensor : Base
    {
    public:
        BinarySensor(
            Device* device,
            std::string prefix,
            std::string objectID,
            std::string uniqueID
        ) : Base(device, "binary_sensor", prefix, objectID, uniqueID) { }
    
        std::string marshalJSON();
    
        BinarySensor* setDeviceClass(DeviceClass deviceClass)
        {
            _deviceClass = deviceClass;
            return this;
        }
    
        BinarySensor* setStateTopic(std::string stateTopic)
        {
            _stateTopic = stateTopic;
            return this;
        }
    
        BinarySensor* setValueTemplate(std::string valueTemplate)
        {
            _valueTemplate = valueTemplate;
            return this;
        }
    
        BinarySensor* setPayloadOn(std::string payloadOn)
        {
            _payloadOn = payloadOn;
            return this;
        }
    
        BinarySensor* setPayloadOff(std::string payloadOff)
        {
            _payloadOff = payloadOff;
            return this;
        }
    
    private:
        DeviceClass _deviceClass = NULL;
        std::string _stateTopic = "";
        std::string _valueTemplate = "";
        std::string _payloadOn = "";
        std::string _payloadOff = "";
    };    
}
