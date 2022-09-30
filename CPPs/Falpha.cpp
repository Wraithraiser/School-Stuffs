#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Falpha.h"

using namespace std;
typedef char sign;

void Falpha(){
    system("cls");
    sign lttr;
    
    cout<<"Alphabet: ";
    
    for(lttr='A'; lttr <='Z'; lttr++)
    {
        cout<<lttr<<" ";
    }
         _getch(); 
         system("cls");
    
}