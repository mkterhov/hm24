#include <iostream>
#include "TvRemote.h"

void TvRemote::powerOn() {
    m_power = true;
    std::cout << "TV Power On." << std::endl;
}

void TvRemote::powerOff() {
    m_power = false;
    std::cout << "TV Power Off." << std::endl;
}

void TvRemote::volumeUp() {
    m_volume++;
    std::cout << "Volume : " << m_volume << std::endl;
}

void TvRemote::volumeDown() {
    m_volume--;
    std::cout << "Volume : " << m_volume << std::endl;
}

void TvRemote::nextChannel() {
    m_currentChannel++;
    if (m_currentChannel > m_last_channel)
    {
        m_currentChannel = 0;
    }
    std::cout << "Next Channel." << std::endl;
}

void TvRemote::prevChannel() {
    m_currentChannel--;
    if (m_currentChannel < 0)
    {
        m_currentChannel = m_last_channel;
    }

    std::cout << "Previous Channel." << std::endl;
}

void TvRemote::mute() {
    m_volume = 0;
    std::cout << "Mute." << std::endl;
}
