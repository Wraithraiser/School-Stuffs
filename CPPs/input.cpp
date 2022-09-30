#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void input(int array[][100], int row, int col){
 //Input Values
    cout<<"\nInput a values for 2D Array:\n";
    for (int i=0; i<row; i++)
    {
        for(int j=0;j<col;j++)
        {
           cout<<"\n Array ["<<i<<"] ["<<j<<"] = ";
           cin>>array[i][j];
        }
        cout << endl;
    }
}