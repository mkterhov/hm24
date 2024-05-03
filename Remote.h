#pragma once


class Remote {
public:
    virtual ~Remote() {}

    virtual void powerOn() = 0;
    virtual void powerOff() = 0;
    virtual void volumeUp() = 0;
    virtual void volumeDown() = 0;
    virtual void nextChannel() = 0;
    virtual void prevChannel() = 0;
    virtual void mute() = 0;
};
