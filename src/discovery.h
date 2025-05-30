#pragma once

#include <Arduino.h>
#include <vector>
#include "entity/device.h"
#include "entity/base_entity.h"
#include "entity/binary_sensor.h"
#include "entity/button.h"
#include "entity/climate.h"
#include "entity/cover.h"
#include "entity/light.h"
#include "entity/sensor.h"
#include "entity/switch.h"
#include "entity/water_heater.h"

namespace EDHA
{
    typedef std::function<bool(std::string topicName, std::string payload)> SendFunction;

    class DiscoveryMgr
    {
    public:
        DiscoveryMgr() {
            _isSend = false;
            _lastSendTime = 0;
        }

        Device* addDevice()
        {
            _devices.push_back(Device());

            return &_devices[_devices.size()-1];
        }

        void init(std::string discoveryPrefix, bool sendEnabled, SendFunction fn);
        void loop();

    public:
        BinarySensor* addBinarySensor(
            Device* device,
            std::string name,
            std::string objectID,
            std::string uniqueID
        ) {
            if (device == NULL && _devices.size() > 0) {
                device = &_devices[_devices.size()-1];
            }

            BinarySensor* obj = new BinarySensor(
                device,
                _discoveryPrefix,
                objectID,
                uniqueID
            );
            obj->setName(name);

            _entities.push_back(obj);

            return obj;
        }

        Button* addButton(
            Device* device,
            std::string name,
            std::string objectID,
            std::string uniqueID
        ) {
            if (device == NULL && _devices.size() > 0) {
                device = &_devices[_devices.size()-1];
            }

            Button* obj = new Button(
                device,
                _discoveryPrefix,
                objectID,
                uniqueID
            );
            obj->setName(name);

            _entities.push_back(obj);

            return obj;
        }

        Climate* addClimate(
            Device* device,
            std::string name,
            std::string objectID,
            std::string uniqueID
        ) {
            if (device == NULL && _devices.size() > 0) {
                device = &_devices[_devices.size()-1];
            }

            Climate* obj = new Climate(
                device,
                _discoveryPrefix,
                objectID,
                uniqueID
            );
            obj->setName(name);

            _entities.push_back(obj);

            return obj;
        }

        Cover* addCover(
            Device* device,
            std::string name,
            std::string objectID,
            std::string uniqueID
        ) {
            if (device == NULL && _devices.size() > 0) {
                device = &_devices[_devices.size()-1];
            }

            Cover* obj = new Cover(
                device,
                _discoveryPrefix,
                objectID,
                uniqueID
            );
            obj->setName(name);

            _entities.push_back(obj);

            return obj;
        }

        Light* addLight(
            Device* device,
            std::string name,
            std::string objectID,
            std::string uniqueID
        ) {
            if (device == NULL && _devices.size() > 0) {
                device = &_devices[_devices.size()-1];
            }

            Light* obj = new Light(
                device,
                _discoveryPrefix,
                objectID,
                uniqueID
            );
            obj->setName(name);

            _entities.push_back(obj);

            return obj;
        }

        Sensor* addSensor(
            Device* device,
            std::string name,
            std::string objectID,
            std::string uniqueID
        ) {
            if (device == NULL && _devices.size() > 0) {
                device = &_devices[_devices.size()-1];
            }

            Sensor* obj = new Sensor(
                device,
                _discoveryPrefix,
                objectID,
                uniqueID
            );
            obj->setName(name);

            _entities.push_back(obj);

            return obj;
        }
        
        Switch* addSwitch(
            Device* device,
            std::string name,
            std::string objectID,
            std::string uniqueID
        ) {
            if (device == NULL && _devices.size() > 0) {
                device = &_devices[_devices.size()-1];
            }

            Switch* obj = new Switch(
                device,
                _discoveryPrefix,
                objectID,
                uniqueID
            );
            obj->setName(name);

            _entities.push_back(obj);

            return obj;
        }

        WaterHeater* addWaterHeater(
            Device* device,
            std::string name,
            std::string objectID,
            std::string uniqueID
        ) {
            if (device == NULL && _devices.size() > 0) {
                device = &_devices[_devices.size()-1];
            }

            WaterHeater* obj = new WaterHeater(
                device,
                _discoveryPrefix,
                objectID,
                uniqueID
            );
            obj->setName(name);

            _entities.push_back(obj);

            return obj;
        }

    private:
        void sendDiscovery();

    private:
        std::vector<Device> _devices;
        std::vector<Base*> _entities;
        SendFunction _sendFunction;

    private:
        std::string _discoveryPrefix;
        bool _sendEnabled;

    private:
        bool _isSend;
        uint64_t _lastSendTime;
    };
}
