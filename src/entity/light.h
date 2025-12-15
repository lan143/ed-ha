#pragma once

#include "base_entity.h"

namespace EDHA
{
    class Light : public Base
    {
    public:
        Light(
            Device* device,
            std::string prefix,
            std::string objectID,
            std::string uniqueID
        ) : Base(device, "light", prefix, objectID, uniqueID) { }

        std::string marshalJSON() override;

        Light* setBrightnessStateTopic(std::string brightnessStateTopic)
        {
            _brightnessStateTopic = brightnessStateTopic;
            return this;
        }

        Light* setBrightnessValueTemplate(std::string brightnessValueTemplate)
        {
            _brightnessValueTemplate = brightnessValueTemplate;
            return this;
        }

        Light* setBrightnessCommandTopic(std::string brightnessCommandTopic)
        {
            _brightnessCommandTopic = brightnessCommandTopic;
            return this;
        }

        Light* setBrightnessCommandTemplate(std::string brightnessCommandTemplate)
        {
            _brightnessCommandTemplate = brightnessCommandTemplate;
            return this;
        }

        Light* setBrightnessScale(uint8_t scale)
        {
            _brightnessScale = scale;
            return this;
        }

        Light* setStateTopic(std::string stateTopic)
        {
            _stateTopic = stateTopic;
            return this;
        }

        Light* setStateValueTemplate(std::string stateValueTemplate)
        {
            _stateValueTemplate = stateValueTemplate;
            return this;
        }

        Light* setCommandTopic(std::string commandTopic)
        {
            _commandTopic = commandTopic;
            return this;
        }

        Light* setPayloadOn(std::string payloadOn)
        {
            _payloadOn = payloadOn;
            return this;
        }

        Light* setPayloadOff(std::string payloadOff)
        {
            _payloadOff = payloadOff;
            return this;
        }

        Light* setRGBCommandTemplate(std::string rgbCommandTemplate)
        {
            _rgbCommandTemplate = rgbCommandTemplate;
            return this;
        }

        Light* setRGBCommandTopic(std::string rgbCommandTopic)
        {
            _rgbCommandTopic = rgbCommandTopic;
            return this;
        }

        Light* setRGBStateTopic(std::string rgbStateTopic)
        {
            _rgbStateTopic = rgbStateTopic;
            return this;
        }

        Light* setRGBValueTemplate(std::string rgbValueTemplate)
        {
            _rgbValueTemplate = rgbValueTemplate;
            return this;
        }

        Light* setColorTempCommandTemplate(std::string commandTemplate)
        {
            _colorTempCommandTemplate = commandTemplate;
            return this;
        }

        Light* setColorTempCommandTopic(std::string commandTopic)
        {
            _colorTempCommandTopic = commandTopic;
            return this;
        }

        Light* setColorTempKelvin(bool isKelvin)
        {
            _colorTempKelvin = isKelvin;
            return this;
        }

        Light* setColorTempStateTopic(std::string stateTopic)
        {
            _colorTempStateTopic = stateTopic;
            return this;
        }

        Light* setColorTempValueTemplate(std::string valueTemplate)
        {
            _colorTempValueTemplate = valueTemplate;
            return this;
        }

        Light* setMinKelvin(uint16_t minKelvin)
        {
            _minKelvin = minKelvin;
            return this;
        }

        Light* setMaxKelvin(uint16_t maxKelvin)
        {
            _maxKelvin = maxKelvin;
            return this;
        }

    private:
        std::string _brightnessStateTopic = "";
        std::string _brightnessValueTemplate = "";
        std::string _brightnessCommandTopic = "";
        std::string _brightnessCommandTemplate = "";
        uint8_t _brightnessScale = 255;
        std::string _stateTopic = "";
        std::string _stateValueTemplate;
        std::string _commandTopic = "";
        std::string _payloadOn = "";
        std::string _payloadOff = "";
        std::string _rgbCommandTemplate = "";
        std::string _rgbCommandTopic = "";
        std::string _rgbStateTopic = "";
        std::string _rgbValueTemplate = "";
        std::string _colorTempCommandTemplate = "";
        std::string _colorTempCommandTopic = "";
        bool _colorTempKelvin = false;
        std::string _colorTempStateTopic = "";
        std::string _colorTempValueTemplate = "";
        uint16_t _minKelvin = 0;
        uint16_t _maxKelvin = 0;
    };
}