#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "DBinary.h"

using namespace std;

 void DBinary(){
    system("cls");
int number, rem;
    int cntr=0;
    int i=0;
    
    cout<<"Enter a number: ";
    cin >> number;
    
    cout <<"Converted form: ";
    do{
        cntr=cntr+1;
        rem=number%2;
        number=number/2;
        cout << " "<< rem;
    }
    while(number !=0);
         _getch(); 
         system("cls");
   
}