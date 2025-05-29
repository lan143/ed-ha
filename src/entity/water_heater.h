#pragma once

#include <Arduino.h>
#include <list>
#include "base.h"
#include "enum/modes.h"

namespace EDHA
{
    class WaterHeater : Base
    {
    public:
        WaterHeater(
            Device* device,
            std::string prefix,
            std::string objectID,
            std::string uniqueID
        ) : Base(device, "water_heater", prefix, objectID, uniqueID) { }
    
        std::string marshalJSON();
    
        WaterHeater* setModeCommandTemplate(std::string modeCommandTemplate)
        {
            _modeCommandTemplate = modeCommandTemplate;
            return this;
        }
    
        WaterHeater* setModeCommandTopic(std::string modeCommandTopic)
        {
            _modeCommandTopic = modeCommandTopic;
            return this;
        }
    
        WaterHeater* setModeStateTemplate(std::string modeStateTemplate)
        {
            _modeStateTemplate = modeStateTemplate;
            return this;
        }
    
        WaterHeater* setModeStateTopic(std::string modeStateTopic)
        {
            _modeStateTopic = modeStateTopic;
            return this;
        }
    
        WaterHeater* setCurrentTemperatureTemplate(std::string currentTemperatureTemplate)
        {
            _currentTemperatureTemplate = currentTemperatureTemplate;
            return this;
        }
    
        WaterHeater* setCurrentTemperatureTopic(std::string currentTemperatureTopic)
        {
            _currentTemperatureTopic = currentTemperatureTopic;
            return this;
        }
    
        WaterHeater* setMinTemp(float minTemp)
        {
            _minTemp = minTemp;
            return this;
        }
    
        WaterHeater* setMaxTemp(float maxTemp)
        {
            _maxTemp = maxTemp;
            return this;
        }
    
        WaterHeater* setTemperatureCommandTemplate(std::string temperatureCommandTemplate)
        {
            _temperatureCommandTemplate = temperatureCommandTemplate;
            return this;
        }
    
        WaterHeater* setTemperatureCommandTopic(std::string temperatureCommandTopic)
        {
            _temperatureCommandTopic = temperatureCommandTopic;
            return this;
        }
    
        WaterHeater* setModes(std::list<Mode> modes)
        {
            _modes = modes;
            return this;
        }
    
    private:
        std::string _modeCommandTemplate = "";
        std::string _modeCommandTopic = "";
        std::string _modeStateTemplate = "";
        std::string _modeStateTopic = "";
        std::string _currentTemperatureTemplate = "";
        std::string _currentTemperatureTopic = "";
        float _minTemp;
        float _maxTemp;
        std::string _temperatureCommandTemplate = "";
        std::string _temperatureCommandTopic = "";
        std::list<Mode> _modes;
    };    
}
