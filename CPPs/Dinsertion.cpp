#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

void Dinsertion(int array[][100],int row,int col){
    system("cls");
    int newarr[100];
    int m,p;
    int x = 0;
    int key = 0;
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
         newarr[x] = array[i][j];
         x++;
        }
    }
    for (int y = 1; y < x; y++){
        if(newarr[y] < newarr[y-1]){
            key = newarr[y];
            m = y - 1;
            while (m >= 0 && newarr[m] > key){
                newarr[m+1] = newarr[m];
                m--;
            }
            newarr[m + 1] = key;
        }
    }
    cout << "\n\t- - Sorting Complete - -"; 
    for (int o = 1; o < x; o++){
        if(newarr[o] > newarr[o - 1]){
            key = newarr[o];
            p = o - 1;
            while (p >= 0 && newarr[p] < key){
                newarr[p+1] = newarr[p];
                p--;
            }
            newarr[p+1] = key;
        }
    } 
    cout << "\n\t- - Displaying Sorted array - -";
    for (int b = 0; b < x; b++) {
        cout << newarr[b] << "  ";
    }
    int turn = 0;
    for (int i = 0; i < row; i++) {
        for (int a = 0; a < col; a++) {
            array[i][a] = newarr[turn++];
        }
    }
}
