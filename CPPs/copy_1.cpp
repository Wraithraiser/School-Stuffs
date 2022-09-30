#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void copy(int array[][100],int array1[][100],int row,int col){

   for (int i=0; i<row; i++)
    {
        for(int j = 0; j <col; j++)
        {
        array1[i][j] = array[i][j];
        }
    }
    cout <<"Displaying Copy Array:\n";
    for(int i=0;i <row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << "\t" <<array1[i][j];
        }
        cout << endl;
    }
}