#pragma once

#include "Car.h"

class SportCar : public Car {
private:
    int m_speed;
    bool m_engineRunning;
    int m_acceleration;

public:
    SportCar() = delete;
    SportCar(const int&, const bool&, const int&);
    virtual ~SportCar();

    void startEngine() override;
    void stopEngine() override;
    void accelerate() override;
    void brake() override;
    int getCurrentSpeed() const override;
};
