#include <stdio.h>
#include <stdbool.h>

#define N 9
// r--->rows   c ---> Columns
//  To print the Sudoku grid
void printGrid(int grid[N][N])
{
    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < N; c++)
        {
            printf("%2d ", grid[r][c]);
        }
        printf("\n");
    }
}

// To check if it's safe to place a number in a cell
bool isSafe(int grid[N][N], int r, int c, int num)
{
    for (int x = 0; x < N; x++)
    {
        if (grid[r][x] == num || grid[x][c] == num)
        {
            return false;
        }
    }

    // Checking 3x3 sub-grid condition
    int startRow = r - r % 3, startCol = c - c % 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i + startRow][j + startCol] == num)
            {
                return false;
            }
        }
    }

    return true;
}

// Solving the Sudoku puzzle using backtracking
bool solveSudoku(int grid[N][N])
{
    int r, c;
    bool emptyCell = false;

    // Find an empty cell
    for (r = 0; r < N; r++)
    {
        for (c = 0; c < N; c++)
        {
            if (grid[r][c] == 0)
            {
                emptyCell = true;
                break;
            }
        }
        if (emptyCell)
        {
            break;
        }
    }

    // no empty cells --->  puzzle is solved
    if (!emptyCell)
    {
        return true;
    }
    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(grid, r, c, num))
        {
            grid[r][c] = num;
            if (solveSudoku(grid))
            {
                return true;
            }
            grid[r][c] = 0;
        }
    }

    return false;
}

int main()
{
    int grid[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    if (solveSudoku(grid))
    {
        printGrid(grid);
    }
    else
    {
        printf("No solution exists\n");
    }

    return 0;
}
