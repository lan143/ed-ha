# EDHA - Home Assistant MQTT Discovery for Embedded Devices

EDHA is a library that implements Home Assistant MQTT discovery protocol for embedded devices, making it easy to integrate ESP32-based devices with Home Assistant.

## Features

- Supports multiple entity types (sensor, switch, light, climate, etc.)
- Automatic MQTT discovery configuration
- Device information management
- Easy integration with ESP-IDF and Arduino frameworks

## Installation

### PlatformIO
Add to your `platformio.ini`:
```
[env:your_env]
lib_deps =
    ed-ha=https://github.com/lan143/ed-ha.git
```

### Arduino IDE
Install via Library Manager or clone the repository into your libraries folder.

## Usage

```cpp
#include <Arduino.h>
#include <EDHA/discovery.h>

// Create discovery manager
EDHA::DiscoveryMgr discoveryMgr;

void setup() {
    // Initialize MQTT connection (your implementation)
    // ...
    
    // Setup discovery with custom prefix and send function
    discoveryMgr.init(
        "homeassistant",  // Discovery prefix
        true,             // Enable sending discovery messages
        [](std::string topicName, std::string payload) {
            // Your MQTT publish function
            return mqttClient.publish(topicName.c_str(), payload.c_str(), true);
        }
    );

    // Create device
    EDHA::Device* device = discoveryMgr.addDevice();
    device->setHWVersion("1.0")
          ->setSWVersion("1.0.0")
          ->setModel("My Device")
          ->setName("Living Room Sensor")
          ->setManufacturer("My Company");

    // Add sensor with state topic and unit of measurement
    auto temperatureSensor = discoveryMgr.addSensor(
        device,
        "Temperature",      // Name
        "temp_sensor",      // Object ID
        "temp_01"           // Unique ID
    );
    
    temperatureSensor->setStateTopic("mydevice/sensors/temperature")
                      ->setUnitOfMeasurement("°C")
                      ->setDeviceClass("temperature")
                      ->setSensorStateClass(EDHA::SENSOR_STATE_CLASS_MEASUREMENT);
    
    // Add switch with command and state topics
    auto relaySwitch = discoveryMgr.addSwitch(
        device,
        "Relay Switch",     // Name
        "relay_switch",     // Object ID
        "switch_01"         // Unique ID
    );
    
    relaySwitch->setCommandTopic("mydevice/switches/relay/command")
               ->setStateTopic("mydevice/switches/relay/state")
               ->setPayloadOn("ON")
               ->setPayloadOff("OFF");
}

void loop() {
    discoveryMgr.loop();
}
```

## Supported Entity Types

- Binary Sensor
- Button
- Climate
- Cover
- Light
- Sensor
- Switch
- Water Heater

## Example Entities

### Sensor
```cpp
auto sensor = discoveryMgr.addSensor(device, "Temperature", "temp_sensor", "temp_01");
```

### Switch
```cpp
auto switchEntity = discoveryMgr.addSwitch(device, "Relay Switch", "relay_switch", "switch_01");
```

### Light
```cpp
auto light = discoveryMgr.addLight(device, "Living Room Light", "light_1", "light_01");
```

## Dependencies

- ArduinoJson
- ed-utils library
- ESP-IDF or Arduino framework for ESP32

## License

MIT
