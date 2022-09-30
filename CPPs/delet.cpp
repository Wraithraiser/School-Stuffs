#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;


int delet(int array[][100],int row, int col){
    int value;
    cout << "\nWhat number you want to delete: ";
    cin >>value;
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(array[i][j] == value){
                array[i][j] = 0;
                return true;
            }
        }
    }
}
