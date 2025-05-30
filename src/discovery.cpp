#include <list>
#include <esp_log.h>
#include "discovery.h"
#include "enum/entity_category.h"

void EDHA::DiscoveryMgr::init(std::string discoveryPrefix, bool sendEnabled, SendFunction fn)
{
    _discoveryPrefix = discoveryPrefix;
    _sendEnabled = sendEnabled;

    _isSend = false;
    _lastSendTime = 0;
    _sendFunction = fn;
}

void EDHA::DiscoveryMgr::loop()
{
    if (!_isSend && (_lastSendTime + 10000) < millis()) {
        sendDiscovery();
        _lastSendTime = millis();
    }
}

void EDHA::DiscoveryMgr::sendDiscovery()
{
    if (!_sendEnabled) {
        ESP_LOGD("discovery_mgr", "skip send, disabled in config");
        _isSend = true;
        return;
    }

    for (auto entity : _entities) {
        std::string payload = entity->marshalJSON();
        std::string topicName = entity->getTopicName();

        if (!_sendFunction(topicName, payload)) {
            return;
        }
    }

    _isSend = true;
}
