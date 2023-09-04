#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
    int get_powerRating();
    void set_powerRating(int powerRating);
    bool get_isOn();
private:
    int powerRating;
    bool isOn;
};

#endif
