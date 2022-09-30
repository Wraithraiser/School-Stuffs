#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Ffact.h"

using namespace std;

void Ffact(){
    system("cls");
    int num, f, i;
    f=1;
    i=1;
    
    cout<<"enter number: ";
            cin>>num;
    
    for(i==1; i <= num; i++)
    {
        f=f*i;
    }
    
    cout << "The factorial of "<< num<<" is " << f <<"\n";
         _getch(); 
         system("cls");
}