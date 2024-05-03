#pragma once

class Car {
public:
    virtual ~Car() {}

    virtual void startEngine() = 0;

    virtual void stopEngine() = 0;

    virtual void accelerate() = 0;

    virtual void brake() = 0;

    virtual int getCurrentSpeed() const = 0;
};
