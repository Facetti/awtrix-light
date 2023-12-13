#ifndef ServerManager_h
#define ServerManager_h

#define FASTLED_INTERNAL //remove annoying pragma messages
#include <Arduino.h>

class ServerManager_
{
private:
    ServerManager_() = default;

public:
    static ServerManager_ &getInstance();
    void setup();
    void tick();
    void loadSettings();
    void sendButton(byte btn, bool state);
    void sendHTTPRequest(const String& topic, const String& state);
    bool isConnected;
    IPAddress myIP;
};

extern ServerManager_ &ServerManager;
 
#endif
