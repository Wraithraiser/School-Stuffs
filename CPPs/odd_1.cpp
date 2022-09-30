#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

int odd(int array[][100],int row, int col){
    system("cls");
    int square;
    square = 0;
    
    cout << "\nOdd numbers in the arrays are: ";
    for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
        if (~array[i][j] % 2 == 0)
            cout << array[i][j]<<" ";
        }
    }
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
        if (array[i][j] % 2 != 0)
            square += array[i][j] * array[i][j];
        }
    }
    cout <<"\n Sum of the square of all odd number is " << square;
    _getch();
    system("cls");
    return 0;
}