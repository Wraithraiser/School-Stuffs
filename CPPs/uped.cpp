#include <iostream>
#include <process.h>
#include <conio.h>
#include "display_1.h"
using namespace std;

void uped(int array[][100], int row, int col){
    system("cls");
    int z;
    z = 0;
   
    display(array,row,col);
    
    cout << "\nEnter a number to update the array: ";
    for (int x = 0; x < row; x++){
        for(int y = 0; y < col; y++){
            z = z + 3;
            cout << "\n Array [" << x <<"] [" << y << "] = ";
            cin >> array[x][y];
        }
    }
}