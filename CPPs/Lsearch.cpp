#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

int Lsearch(int fscore[], int index, int Value2){
   
    for (int i = 0; i < index; i++)
    {
        if (Value2 == fscore[i])
        {
            return i;
        }
    }
    return -1;
}           // A function with arguments and returns a value