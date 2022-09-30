#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Wfact.h"

using namespace std;

 void Wfact(){
    system("cls");
   int num;
    int f=1;
    int i =1;
    
    cout<<"Factorial of: ";
    cin>> num;
    
    while (i <= num)
    {
        f=f*i;
        i++;
    }
           
    cout<<"Factorial of "<< num << " is "<< f<<"\n";
         _getch(); 
         system("cls");
 }
    