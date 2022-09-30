#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

bool equal(int array[][100], int array1[][100],int row, int col){
    
    cout<<"\nInput a values for Second 2D Array:\n";
    for (int i=0; i<row; i++)
    {
        for(int j=0;j<col;j++)
        {
           cout<<"\n Array ["<<i<<"] ["<<j<<"] = ";
           cin>>array1[i][j];
        }
        cout << endl;
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (!(array[i][j] == array1[i][j]))
            {
                return false;
            }
        }
    }
}