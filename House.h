#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
public:
    House();
    House(int numAppliances);
    ~House();
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
private:
    Appliance** appliances;
    int numAppliances;
    int currentAppliance;
};

#endif
