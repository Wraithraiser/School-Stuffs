#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void Lsearch(int array[100][100],int row,int col){
    int value;
    int cntr = 0;
    cout << "Enter the number you want to search: ";
    cin >> value;
    
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if (value == array[i][j]){
                cout << " Element found at [" << i << "][" << j << "]";
                cntr = 1;
                break;
            }
        }
    }
    if (cntr == 0){
        cout << "The number you are looking for are not in the array";
    }
}
