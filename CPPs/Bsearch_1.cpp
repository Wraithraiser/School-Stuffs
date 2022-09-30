#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void Bsearch(int array[][100], int row, int col, int value, int x){
    int L = 0;
    int R = col - 1;
    int M;
    
    while(L <= R)
    {
        M = (L + R) / 2;
        
        if (array[x][M] == value)
        {
            cout << "Found at (" << x << "," << M << ")" << endl;
            return;
        }
        if (array[x][M] > value)
            R = M - 1;
        if (array[x][M] < value)
            L = M + 1;
    }
    cout <<"Element not found" << endl;
}  