#pragma once
#include <SDL.h>
#include <ostream>
#include <iostream>
#include <ostream>
#include <math.h>
#include <vector>
#include "GameState.h"
#include "GameView.h"

class GameController {
public:
    explicit GameController(GameState& gameState);
    void handleInput(SDL_Keycode keycode, bool down);
    void paddleCollision(int collision);
    void resetGame();
    void resetPaddles();
    void resetBall(int dir);
    int checkCollision(float ballXDelta, float ballYDelta);
    void update();
    int checkWin() const;
private:
    GameState& m_gameState;
    uint32_t startTime;
    uint32_t endTime{};
    float deltaTime{};
};
