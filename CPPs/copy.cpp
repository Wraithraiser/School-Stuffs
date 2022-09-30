#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;
void copy(int score[],int score2[],int index){

    int b = index;
    
    for (int i=0; i < b; i++){
        score2[i] = score[i];
    }

    cout << "The Copy Array: ";
    for (int i = 0; i<b; i++)
        cout << score2[i]<< " ";
 
}                   // A function with arguments and does not returns a value