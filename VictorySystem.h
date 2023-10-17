#ifndef VICTORYSYSTEM_H
#define VICTORYSYSTEM_H

#include "Pokemon.h"

class VictorySystem {
public:
    int checkWinner(int currentPlayerBloodVolume, int currentOpponentBloodVolume) {
        if (currentPlayerBloodVolume <= 0) {
            int num = 1;
            return num;
        } else if (currentOpponentBloodVolume <= 0) {
            int num = 2;
            return num;
        } else {
            int num = 0;
            return num;
        }
    }

};

#endif // VICTORYSYSTEM_H