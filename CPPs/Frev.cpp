#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Frev.h"

using namespace std;

 void Frev(){
    system("cls");
    int number, rev;
    cout << "enter number: ";
    cin>>number;
    
    rev=0;
    
    if(number == 0)
    {
        cout << "Reversed number of "<<number<<" is "<< rev<<"\n";
    }
      
    else
        for (;number !=0;)
        {
            rev=rev *10;
            rev=rev+number%10;
            number = number/10;
        }
    
    cout << "Reversed number is " << rev<<"\n";
         _getch(); 
         system("cls");
}