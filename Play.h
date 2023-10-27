#ifndef PLAY_H
#define PLAY_H

#include "Spot.h"
#include "Snare.h"
#include "Persona.h"
#include "Assists.h"
#include "Influence.h"
#include <vector>
#include <iostream>

class Play {
public:
    Play() {}
    std::vector<Spot*>& getMatrix() { return matrix; }
    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight);
    void playCycle(int maxCycles, double snareTriggerDistance);

private:
    std::vector<Spot*> matrix;
    int matrixWidth; 
    int matrixHeight; 
};

void Play::initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight) {
    this->matrixWidth = matrixWidth; 
    this->matrixHeight = matrixHeight;
    for (int i = 0; i < numPersonas; ++i) {
        auto loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
        matrix.push_back(new Persona(std::get<0>(loc), std::get<1>(loc)));
    }
    for (int i = 0; i < numSnares; ++i) {
        auto loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
        matrix.push_back(new Snare(std::get<0>(loc), std::get<1>(loc)));
    }
}

void Play::playCycle(int maxCycles, double snareTriggerDistance) {
    for (int i = 0; i < maxCycles; ++i) {
        for (auto& spot : matrix) {
            if (Persona* persona = dynamic_cast<Persona*>(spot)) {
                persona->shift(1, 0);
                for (auto& other : matrix) {
                    if (Snare* snare = dynamic_cast<Snare*>(other)) {
                        if (snare->isOperative() && Assists::evaluateDistance(persona->getLoc(), snare->getLoc()) <= snareTriggerDistance) {
                            snare->implement(*persona);
                        }
                    }
                }
                // 检查角色是否已经走出了网格
                std::tuple<int, int> loc = persona->getLoc();
                int x = std::get<0>(loc);
                int y = std::get<1>(loc);
                if (x >= this->matrixWidth || y >= this->matrixHeight) { 
                    std::cout << "Persona has won the game!" << std::endl;
                    return;
                }
            }
        }
    }
    std::cout << "Maximum number of cycles reached. Game over." << std::endl;
}

#endif
