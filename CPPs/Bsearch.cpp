#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

int Bsearch(int fscore[], int index, int Svalue){
    int L = 0;
    int H = index -1;
    int M;
    
    while(L <= H){
        M = (L + H) / 2;
        
        if(Svalue == fscore[M])
        {
            return M;
        }
        else if (Svalue > fscore[M])
        {
            L = M + 1;
        }
        else
        {
            H = M -1;
        }
    }
    return -1;
}           // A function with arguments and returns a value