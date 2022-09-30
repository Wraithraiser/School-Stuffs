#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

int odd(int score[],int index){
    system("cls");
    int square;
    square = 0;
    
    cout << "\nOdd numbers in the arrays are: ";
    for (int i=0; i<index; i++){
        if (~score[i] % 2 == 0){
            cout << score[i]<<" ";
        }
    }
    for (int i = 0; i < index; i++)
        if (score[i] % 2 != 0)
            square += score[i] * score[i];
    cout <<"\n Sum of the square of all odd number is " << square;
    _getch();
    system("cls");
    return 0;
}                                               // A function without arguments and returns a value