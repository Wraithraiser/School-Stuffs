#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Deven.h"

using namespace std;

 void Deven(){
    system("cls");
  int number;
    int i=1;
    
    cout<<"Enter a number: ";
    cin>> number;
    
    do{
        if (i%2==0)
        {
            cout << i << " ";
        }
        i++;
    }
    while (i <+number);
         _getch(); 
         system("cls");

}