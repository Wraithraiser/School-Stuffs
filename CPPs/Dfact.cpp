#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Dfact.h"

using namespace std;

 void Dfact(){
    system("cls");
  int number;
    int f = 1;
    int i =1;
    
    cout<<"Factorial of: ";
    cin>>number;
    
    do{
        f=f*i;
        i++;
    }
    while(i<=number);
    
    cout<<"Factorial of "<<number<< " is "<<f<<"'\n";
    
         _getch(); 
         system("cls");

}