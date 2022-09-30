#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Wrev.h"

using namespace std;

 void Wrev(){
    system("cls");
    int num;
    int rev=0;
    int Ld;
    
    cout<<"Enter number: ";
    cin>>num;
    
    while(num !=0)
    {
        Ld=num%10;
        rev = rev * 10 + Ld;
        num /= 10;
    }
    
    cout<<"Reversed: "<<rev<<"\n";
         _getch(); 
         system("cls");
    
}