#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void even(int array[][100],int row,int col){
    system("cls");
    int e;
    e = 0;
    cout << "\nEven numbers in the arrays are: ";
    
    for (int i=0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
        if (array[i][j] % 2 == 0)
            cout << array[i][j] <<" ";
        }
    }   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] % 2 == 0)
                e = e + array[i][j];
        }
    }
    cout <<"\n\nSum of all even number is: " << e << endl;
    _getch();
    system("cls");
}   