#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

void dprime(int fscore[], int index){
    for (int i = 0; i < index; i++)
    {
        if (fscore[i] == 2 || fscore[i] == 3)
        {
            cout << "Prime" << ": " << fscore[i] << "\n";
        }
        else if (fscore[i] % 2 == 0 || fscore[i] % 3 == 0 || fscore[i] == 1 || fscore[i] == 0)
        {
        
        }
        else
        {
            cout << "Prime" << ": " << fscore[i] << "\n";
        }
    }
}