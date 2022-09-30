#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

int dia(int array[][100],int row,int col){
    int sum;
   sum = 0;
    for (int i=0; i < row; i++)
    {
        for(int j=0; j < col; j++)
        {
            if (i == j)
                sum += array[i][j];
        }    
    }
   return sum;
}
