#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

int large(int fscore[],int index){
    int m= fscore[0];
    for (int i = 1; i < index; i++)
        if (fscore[i] > m)
            m = fscore[i];
    return m;
}               // A function with arguments and returns a value