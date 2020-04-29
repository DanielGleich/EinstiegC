#ifndef POSSIBLEMOVES_H
#define POSSIBLEMOVES_H


int checkUp(int **field,int moveRow, int moveCol);
int moveUp(int **field,int moveRow, int moveCol);
int checkRight(int **field,int moveRow, int moveCol);
int moveRight(int **field,int moveRow, int moveCol);
int checkDown(int **field,int moveRow, int moveCol);
int moveDown(int **field,int moveRow, int moveCol);
int checkLeft(int **field,int moveRow, int moveCol);
int moveLeft(int **field,int moveRow, int moveCol);
int executeMove(int **field, int moveRow, int moveCol);


#endif // POSSIBLEMOVES_H
