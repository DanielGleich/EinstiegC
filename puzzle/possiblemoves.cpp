#include "possiblemoves.h"
#include <iostream>

using namespace std;

int checkUp(int **field, int moveRow,int moveCol)
{
    if (moveRow == 0)
        return 0;

    else if (field[moveRow-1][moveCol] == 0)
        return 1;
    else
        return 0;
}

int moveUp(int **field, int moveRow, int moveCol)
{
    if (checkUp(field, moveRow, moveCol) == 1)
    {
        swap(field[moveRow][moveCol],field[moveRow-1][moveCol]);
        return 1;
    }

    else
        return 0;
}

int checkRight(int **field, int moveRow,int moveCol)
{
    if (moveCol == 2)
        return 0;

    else if (field[moveRow][moveCol+1] == 0)
        return 1;
    else
        return 0;
}

int moveRight(int **field, int moveRow, int moveCol)
{
    if (checkRight(field, moveRow, moveCol) == 1)
    {
        swap(field[moveRow][moveCol],field[moveRow][moveCol+1]);
        return 1;
    }

    else
        return 0;
}

int checkDown(int **field, int moveRow,int moveCol)
{
    if (moveRow == 2)
        return 0;

    else if (field[moveRow+1][moveCol] == 0)
        return 1;
    else
        return 0;
}

int moveDown(int **field, int moveRow, int moveCol)
{
    if (checkDown(field, moveRow, moveCol) == 1)
    {
        swap(field[moveRow][moveCol],field[moveRow+1][moveCol]);
        return 1;
    }

    else
        return 0;
}

int checkLeft(int **field, int moveRow,int moveCol)
{
    if (moveCol == 0)
        return 0;

    else if (field[moveRow][moveCol-1] == 0)
        return 1;
    else
        return 0;
}

int moveLeft(int **field, int moveRow, int moveCol)
{
    if (checkLeft(field, moveRow, moveCol) == 1)
    {
        swap(field[moveRow][moveCol],field[moveRow][moveCol-1]);
        return 1;
    }

    else
        return 0;
}

int executeMove(int **field, int moveRow, int moveCol)
{

    if (checkUp(field,moveRow,moveCol) == 1)
    {
        moveUp(field,moveRow,moveCol);
        return 1;
    }

    else if (checkRight(field,moveRow,moveCol) == 1)
    {
        moveRight(field,moveRow,moveCol);
        return 1;
    }

    else if (checkDown(field,moveRow,moveCol) == 1)
    {
        moveDown(field,moveRow,moveCol);
        return 1;
    }

    else if (checkLeft(field,moveRow,moveCol) == 1)
    {
        moveLeft(field,moveRow,moveCol);
        return 1;
    }

    else
    {
        return 0;
    }
}
