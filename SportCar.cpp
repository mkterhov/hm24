#include "SportCar.h"
#include <iostream>

SportCar::SportCar(const int& speed, const bool& engineRunning, const int& acceleration)
    : m_speed(speed), m_engineRunning(engineRunning), m_acceleration(acceleration) {}

SportCar::~SportCar() {}

void SportCar::startEngine() {
    if (m_engineRunning == false) {
        m_engineRunning = true;
        std::cout << "Engine started." << std::endl;
    }
    else {
        std::cout << "Engine is already running." << std::endl;
    }
}

void SportCar::stopEngine() {
    if (m_engineRunning == true) {
        m_engineRunning = false;
        m_speed = 0;
        std::cout << "Engine stopped." << std::endl;
    }
    else {
        std::cout << "Engine is already off." << std::endl;
    }
}

void SportCar::accelerate() {
    if (m_engineRunning == true) {
        m_speed += m_acceleration; 
        std::cout << "Accelerating. " << m_speed << " km/h." << std::endl;
    }
    else {
        std::cout << "Cannot accelerate. Engine is off!" << std::endl;
    }
}
void SportCar::brake() {

    if (m_speed > 0) {
        m_speed -= 10; 
        if (m_speed < 0) m_speed = 0; 
        std::cout << "Braking. Current speed: " << m_speed << " km/h." << std::endl;
    }
    else {
        std::cout << "Car is already stopped." << std::endl;
    }
}

int SportCar::getCurrentSpeed() const {
    return m_speed;
}
