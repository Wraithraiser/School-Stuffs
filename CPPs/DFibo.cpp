#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "DFibo.h"

using namespace std;

void DFibo(){
    system("cls");
 int i=0;
    int x=0;
    int y=0;
    int z=1;
    int n=0;
    
    cout<<"Fibonacci of: ";
    cin>>n;
    
    do{
        cout<<x<<" ";
        y=x+z;
        x=z;
        z=y;
        i++;
   
    }
   
    while (i<=n);
         _getch(); 
         system("cls");
 
}