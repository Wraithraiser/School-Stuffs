#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "FSueven.h"

using namespace std;

void FSueven(){
    system("cls");
    int sum = 0;
    int number;
    
    cout<<"Enter a number: ";
    cin>>number;
    
    for (int i=1; i<=number; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    
    }
        
    cout << "the total sum is "<< sum<<"\n";
         _getch(); 
         system("cls");
    
}