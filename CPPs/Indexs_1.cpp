#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void Indexs(int array[][100], int row, int col){
    int smallest,srow{},scol{};
    cout <<"Displaying 2D Array:\n";
    for(int i=0;i <row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << "\t" <<array[i][j];
        }
        cout << endl;
    }
    
    smallest = array[0][0];
for (int i = 0; i < row; i++)
{
    for(int j=0; j < col; j++)
    {
        if(array[i][j] < smallest)
        {
            smallest = array[i][j];
            srow = i;
            scol = j;
        }
    }
}  
    cout << "The smallest number in array is :" << smallest<<endl;
     cout << "Found at row: " << srow<<endl;
      cout << "Found at col: " << scol<<endl;
}   