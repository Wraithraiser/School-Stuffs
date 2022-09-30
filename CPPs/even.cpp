#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

void even(int score[],int index){
    system("cls");
    int e;
    e = 0;
    cout << "\nEven numbers in the arrays are: ";
    
    for (int i=0; i < index; i++){
        if (score[i] % 2 == 0){
        cout << score[i] <<" ";
        e = e + score[i];
        }
    }   
    cout <<"\n\nSum of all even number is: " << e << endl;
    _getch();
    system("cls");
}                                           // A function without arguments and does NOT returns a value
