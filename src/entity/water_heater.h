#pragma once

#include <Arduino.h>
#include <list>
#include "base_entity.h"
#include "enum/modes.h"

namespace EDHA
{
    class WaterHeater : public Base
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

        WaterHeater* setInitial(int initial)
        {
            _initial = initial;
            return this;
        }

        WaterHeater* setPrecision(float precision)
        {
            _precision = precision;
            return this;
        }
    
    private:
        std::string _modeCommandTemplate = "";
        std::string _modeCommandTopic = "";
        std::string _modeStateTemplate = "";
        std::string _modeStateTopic = "";
        std::string _currentTemperatureTemplate = "";
        std::string _currentTemperatureTopic = "";
        float _minTemp = 0.0f;
        float _maxTemp = 0.0f;
        std::string _temperatureCommandTemplate = "";
        std::string _temperatureCommandTopic = "";
        std::list<Mode> _modes;
        int _initial = 0;
        float _precision = 0.0f;
    };    
}
