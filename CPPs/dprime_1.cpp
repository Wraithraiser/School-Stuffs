#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void dprime(int array[][100], int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
        if (array[i][j] == 2 || array[i][j] == 3)
        {
            cout << "Prime" << ": " << array[i][j] << "\n";
        }
        else if (array[i][j] % 2 == 0 || array[i][j] % 3 == 0 || array[i][j]== 1 || array[i][j] == 0)
            {
        
            }
        else
            {
            cout << "Prime" << ": " << array[i][j] << "\n";
            }
        }
    }
}
