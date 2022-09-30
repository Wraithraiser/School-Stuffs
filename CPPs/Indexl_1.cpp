#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void Indexl(int array[][100], int row, int col){
    int largest,lrow{},lcol{};
    cout <<"Displaying 2D Array:\n";
    for(int i=0;i <row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << "\t" <<array[i][j];
        }
        cout << endl;
    }
    
    largest = array[0][0];
for (int i = 0; i < row; i++)
{
    for(int j=0; j < col; j++)
    {
        if(array[i][j] > largest)
        {
            largest = array[i][j];
            lrow = i;
            lcol = j;
        }
    }
}  
    cout << "The smallest number in array is :" << largest<<endl;
     cout << "Found at row: " << lrow<<endl;
      cout << "Found at col: " << lcol<<endl;
}   // function with argument and does not return a value     
