#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

int large(int array[][100],int row,int col){
    
    int m= array[0][0];
    
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
        if (array[i][j] > m)
            m = array[i][j];
        }
    }
    return m;
}        
