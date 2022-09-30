#include <iostream>
#include <process.h>
#include <conio.h>
#include "Bsearch_1.h"
using namespace std;

void rowFind(int array[][100], int row, int col, int value){
    int L = 0;
    int R = row - 1;
    int M;
    
    while(L <= R)
    {
        M = (L + R) / 2;
        
        if (value == array[M][0])
        {
            cout << "Found at (" << M << ",0)" << endl;
            return;
        }
        if (value == array[M][col - 1])
        {
            int t = col - 1;
            cout << "Found  at (" << M <<","<< t <<")" << endl;
            return;
        }
        if (value > array[M][0] && value < array[M][col - 1])
        {
            Bsearch(array,row,col,value,M);
            return;
        }
        if (value < array[M][0])
            R = M - 1;
        if (value > array[M][col - 1])
            L = M + 1;
    }
}