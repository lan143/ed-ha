#pragma once

#include <Arduino.h>
#include <list>
#include "base_entity.h"
#include "enum/modes.h"

namespace EDHA
{
    class Climate : public Base
    {
    public:
        Climate(
            Device* device,
            std::string prefix,
            std::string objectID,
            std::string uniqueID
        ) : Base(device, "climate", prefix, objectID, uniqueID) { }

        std::string marshalJSON();
    
        Climate* setCurrentTemperatureTemplate(std::string currentTemperatureTemplate)
        {
            _currentTemperatureTemplate = currentTemperatureTemplate;
            return this;
        }
    
        Climate* setCurrentTemperatureTopic(std::string currentTemperatureTopic)
        {
            _currentTemperatureTopic = currentTemperatureTopic;
            return this;
        }
    
        Climate* setMinTemp(float minTemp)
        {
            _minTemp = minTemp;
            return this;
        }
    
        Climate* setMaxTemp(float maxTemp)
        {
            _maxTemp = maxTemp;
            return this;
        }
    
        Climate* setModeCommandTemplate(std::string modeCommandTemplate)
        {
            _modeCommandTemplate = modeCommandTemplate;
            return this;
        }
    
        Climate* setModeCommandTopic(std::string modeCommandTopic)
        {
            _modeCommandTopic = modeCommandTopic;
            return this;
        }
    
        Climate* setModeStateTemplate(std::string modeStateTemplate)
        {
            _modeStateTemplate = modeStateTemplate;
            return this;
        }
    
        Climate* setModeStateTopic(std::string modeStateTopic)
        {
            _modeStateTopic = modeStateTopic;
            return this;
        }
    
        Climate* setTemperatureCommandTemplate(std::string temperatureCommandTemplate)
        {
            _temperatureCommandTemplate = temperatureCommandTemplate;
            return this;
        }
    
        Climate* setTemperatureCommandTopic(std::string temperatureCommandTopic)
        {
            _temperatureCommandTopic = temperatureCommandTopic;
            return this;
        }
    
        Climate* setTemperatureStateTemplate(std::string temperatureStateTemplate)
        {
            _temperatureStateTemplate = temperatureStateTemplate;
            return this;
        }
    
        Climate* setTemperatureStateTopic(std::string temperatureStateTopic)
        {
            _temperatureStateTopic = temperatureStateTopic;
            return this;
        }
    
        Climate* setModes(std::list<Mode> modes)
        {
            _modes = modes;
            return this;
        }
    
        Climate* setPayloadOff(std::string payloadOff)
        {
            _payloadOff = payloadOff;
            return this;
        }
    
        Climate* setPayloadOn(std::string payloadOn)
        {
            _payloadOn = payloadOn;
            return this;
        }

        Climate* setActionTemplate(std::string actionTemplate)
        {
            _actionTemplate = actionTemplate;
            return this;
        }

        Climate* setActionTopic(std::string actionTopic)
        {
            _actionTopic = actionTopic;
            return this;
        }
    
    private:
        std::string _currentTemperatureTemplate = "";
        std::string _currentTemperatureTopic = "";
        float _minTemp;
        float _maxTemp;
        std::string _modeCommandTemplate = "";
        std::string _modeCommandTopic = "";
        std::string _modeStateTemplate = "";
        std::string _modeStateTopic = "";
        std::string _temperatureCommandTemplate = "";
        std::string _temperatureCommandTopic = "";
        std::string _temperatureStateTemplate = "";
        std::string _temperatureStateTopic = "";
        std::list<Mode> _modes;
        std::string _payloadOff = "";
        std::string _payloadOn = "";
        std::string _actionTemplate = "";
        std::string _actionTopic = "";
    };
}
