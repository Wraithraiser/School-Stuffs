#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "WFibo.h"

using namespace std;

void WFibo(){
    system("cls");
    int i =0;
    int a =0;
    int b =0;
    int c=1;
    int n=0;
    
    cout<<"Fibonnacci of: ";
    cin>>n;
    
    while (i<=n)
    {
        cout << a << "\n";
        b=a+c;
        a=c;
        c=b;
        ++i;
                
    }
         _getch(); 
         system("cls");
   
}