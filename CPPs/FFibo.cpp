#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "FFibo.h"

using namespace std;

 void FFibo(){
    system("cls");
    int num, x, y, z, i;
    cout<< "Fibonacci series of: ";
    cin>>num;
    
    x=0;
    z=1;
    
    cout << x <<" "<<z<<" ";
    for (i=2; i <+ num; i++)
    {
        y=x+z;
        cout << y <<" ";
        x=z;
        z=y;
    
    }
         _getch(); 
         system("cls");
  
}