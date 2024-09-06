#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game{

private:
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    Grid grid;
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
    void MoveBlockLeft();
    void MoveBlockRight();
    std::vector<Block> GetAllBlocks();
    Sound rotateSound;
    Sound clearSound;

public:
    Game();
    ~Game();
    Block GetRandomBlock();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    Music music;
    bool gameOver;
    int score;
};