#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

int sos(int array[][100], int row,int col){
    system("cls");
    int square;
    square = 0;
    
    for (int i=0; i < row; i++)
    {
        for (int j=0; j < col; j++)
        {
        square += array[i][j]*array[i][j];
        }
    }
    return square;
 }