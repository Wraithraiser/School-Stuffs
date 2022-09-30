#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

void Indexl(int score[],int index){
    system("cls");
    int largest,index2;
    largest = score[0];
    for (int i = 1; i < index; i++)
        if(score[i] > largest){
            largest = score[i];
            index2 = i;
        }
    cout << "The largest number in array is :" << largest<<endl;
    cout << "And its Index is: " << index2<<endl;
}                                           // A function without arguments and does NOT returns a value