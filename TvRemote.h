#pragma once

#include "Remote.h"

class TvRemote : public Remote
{
private:
    int m_volume = 0;
    int m_last_channel = 12;
    int m_currentChannel = 0;
    bool m_power = false;
public:
    TvRemote() = delete;
    virtual ~TvRemote() {}

    void powerOn() override;
    void powerOff() override;
    void volumeUp() override;
    void volumeDown() override;
    void nextChannel() override;
    void prevChannel() override;
    void mute() override;
};

