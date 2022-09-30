#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>

#include "FBinary.h"

using namespace std;

void FBinary(){
    system("cls");
    int num, rem, cntr;
    cout<<"Enter the Number: ";
    cin>>num;
    
    cntr=0;
    
    for (int i=1; num!=0;)
    {
        rem = num % 2;
        num /= 2;
        cntr += rem * i;
        i *= 10;
    }
    
    cout << "The binary form \n"<< cntr<<"\n";
         _getch(); 
         system("cls");
}