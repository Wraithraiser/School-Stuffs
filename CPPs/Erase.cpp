#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

int Erase(int score[],int index){
    int value;
    cout << "\nWhat number you want to delete: ";
    cin >>value;
    
    for(int i = 0; i < index; i++){
        if(score[i] == value){
            score[i] = 0;
            return true;
        }
    }
}