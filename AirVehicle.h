#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
private:
    int weight;
    float fuel;
    int numberOfFlights;

public:
    AirVehicle();
    AirVehicle(int w);
    void refuel();
    virtual void fly(int headwind, int minutes);
    void set_weight(int w);
    void set_fuel(int f);
    void set_numberOfFlights(int n);
    int get_weight();
    float get_fuel();
    int get_numberOfFlights();
};

#endif

