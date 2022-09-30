#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

void Isort(int fscore[], int index){
    int i, key, j;
    for(i = 1; i < index; i++)
    {
        key = fscore[i];
        j = i - 1;
        
        while( j >= 0 && fscore[j] > key)
        {
            fscore[j + 1] = fscore[j];
            j = j - 1;
        }
        fscore[j+1] = key;
    }
    cout << "Successfully sorted into Ascending Order\n";
    for (i =0; i < index; i++)
        cout << fscore[i] << " ";
    cout << endl;
}                               // A function with arguments and does not returns a value