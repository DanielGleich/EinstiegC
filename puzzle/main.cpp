#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "possiblemoves.h"

using namespace std;

void swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}

int** create2dArray( int size )
{
    int** _2dArray = new int*[size];

    for( int i = 0; i < size; i++ )
    {
        _2dArray[i] = new int[size];
    }

    return _2dArray;
}

void generatePuzzle(int **field)
{
    int fieldNbr = 1;
    for (int row = 0; row < 3 ; row++)
    {
        for (int col = 0; col < 3; col ++)
        {
            field [row][col] = fieldNbr;
            fieldNbr++;
        }
    }
    field[2][2] = 0;
}
void printPuzzle(int **field)
{
    int fieldNbr = 0;
    for (int row = 0; row < 3 ; row++)
    {
        for (int col = 0; col < 3; col ++)
        {
            cout << field[row][col] << " ";
            if ((fieldNbr +1) % 3 == 0)
            {
                cout << endl;
            }
            fieldNbr++;
        }
    }
}

void scramble(int **field)
{
    srand(time (NULL));
    for (int i = 0; i < 19; i++)
    {
        int randomIndex = (int) rand() % 3;
        int randomIndex2 =(int) rand() % 3;
        int randomIndex3 =(int) rand() % 3;
        int randomIndex4 =(int) rand() % 3;
        swap(field[randomIndex][randomIndex2],field[randomIndex3][randomIndex4]);
    }

}

int requestWin(int **field)
{
    if (field[0][0] == 1&&
        field[0][1] == 2&&
        field[0][2] == 3&&
        field[1][0] == 4&&
        field[1][1] == 5&&
        field[1][2] == 6&&
        field[2][0] == 7&&
        field[2][1] == 8&&
        field[2][2] == 0)
    {
        cout << endl << "Glueckwunsch! Sie haben das Puzzle geloest!" << endl;
        return 1;
    }
    return 0;
}

int executeTurn(int **field)
{
    int moveRow,moveCol;

    cout << "Welche Zahl wollen Sie bewegen?" << endl << "Geben Sie zuerst die Reihe und dann die Spalte an" << endl;

    do
    {
        cout << "Reihe:";
        cin >> moveRow;
        moveRow--;
        cout << "Spalte:";
        cin >> moveCol;
        moveCol--;

        if (moveRow >= 3)
            cout << "Diese Reihe gibt es nicht!" << endl;
        if (moveCol >= 3)
            cout << "Die Spalte gibt es nicht!" << endl;

    }while(moveRow >= 3 && moveCol >= 3);

    system("cls");

    executeMove(field,moveRow,moveCol);
    cout << endl;
    printPuzzle(field);

    if (executeMove(field,moveRow,moveCol) == 1)
        return 1;
    else return 0;
}

int main()
{
    int** field= create2dArray(3);
    generatePuzzle(field);
    cout << endl ;

    scramble(field);
    printPuzzle(field);

    do
    {
        executeTurn(field);
    }while(executeTurn(field) == 0 || requestWin(field) != 1);
    requestWin(field);


    return 0;
}
