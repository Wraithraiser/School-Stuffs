#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

int sos(int fscore[], int index){
    system("cls");
    int square;
    square = 0;
    for (int i=0; i < index; i++)
        square += fscore[i]*fscore[i];
    return square;
 }                      // A function with arguments and returns a value