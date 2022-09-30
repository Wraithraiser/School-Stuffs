#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

void Indexs(int score[],int index){
    int smallest,index2;
    index2 = 0;
    smallest = score[0];

    for (int i = 1; i < index; i++)
        if(score[i] < smallest){
            smallest = score[i];
            index2 = i;
        }
    
    cout << "The smallest number in array is :" << smallest<<endl;
    cout << "And its index is:  "<< index2;
}                                           // A function without arguments and does returns a value