#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

void SumofEO(int score[],int index){
    system("cls");
    int e = 0; int o = 0;
    cout << "\nEven numbers in the arrays are: ";
    
    for (int i=0; i < index; i++){
        if (score[i] % 2 == 0){
        cout << score[i] <<" ";
        e = e + score[i];
    }
}   
    cout << "\nOdd numbers in the arrays are: ";
    for (int i=0; i<index; i++){
        if (~score[i] % 2 == 0){
            cout << score[i]<<" ";
            o = o + score[i]; 
        }
    }
    cout << "\n\nSum of all even number is : "<<e << endl;
    cout << "\nSum of all odd number is: "<< o << endl;
    _getch();
    system("cls");
}                               // A function with no arguments and does not return value