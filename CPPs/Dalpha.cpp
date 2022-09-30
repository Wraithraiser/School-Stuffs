#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Dalpha.h"

using namespace std;

typedef char sign;

 void Dalpha(){
    system("cls");
   sign lttr='A';
    cout<<"Alphabet: ";
    
    do{
        cout<<lttr<<" ";
        lttr++;
    }
    while(lttr<='Z');
         _getch(); 
         system("cls");
   
}
