#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Weven.h"

using namespace std;

 void Weven(){
    system("cls");
    int number;
    int i =2;
    
    cout<<"Enter number: ";
    cin>>number;
    
    while(i <=number)
    {
        cout<<i<<"'n";
        i=i+2;
    }
         _getch(); 
         system("cls");
    
}