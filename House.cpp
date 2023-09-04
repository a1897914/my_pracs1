#include "House.h"

House::House() : appliances(0), numAppliances(0), currentAppliance(0) {}

House::House(int numAppliances) : appliances(new Appliance*[numAppliances]), numAppliances(numAppliances), currentAppliance(0) {}

House::~House() {
    for (int i = 0; i < currentAppliance; i++) {
        delete appliances[i];
    }
    delete[] appliances;
}

bool House::addAppliance(Appliance* appliance) {
    if (currentAppliance < numAppliances) {
        appliances[currentAppliance++] = appliance;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() {
    double totalPowerConsumption = 0;
    for (int i = 0; i < currentAppliance; i++) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}
