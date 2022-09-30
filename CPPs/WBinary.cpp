#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "WBinary.h"

using namespace std;

 void WBinary(){
    system("cls");
    int num, rem;
    int cntr = 0;
    int i=1;
    
    cout <<"Enter a number: ";
    cin>>num;
    
    while(num!=0)
    {
        rem = num % 2;
        num /=2;
        cntr += rem *i;
        i *= 10;
    }
    
    cout <<"Converted form: "<<cntr<<"\n";
         _getch(); 
         system("cls");
}