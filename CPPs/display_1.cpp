#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void display(int array[][100], int row, int col){
 //DIsplay Values
    cout <<"Displaying 2D Array:\n";
    for(int i=0;i <row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << "\t" <<array[i][j];
        }
        cout << endl;
    }
}