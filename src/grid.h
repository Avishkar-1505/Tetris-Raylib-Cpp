#pragma once
#include <vector>
#include <raylib.h>

class Grid{
private:
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);

public:
    Grid();
    void Initialize();
    void Print();
    int grid[20][10];
    void Draw();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int col);
    int ClearFullRows();
};