#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Drev.h"

using namespace std;

void Drev(){
    system("cls");
int number;
    int rev=0;
    
    cout<<"Enter number: ";
    cin>>number;
    
    do{
        rev=rev*10;
        rev=rev+number%10;
        number = number / 10;
    }
    while(number !=0);
    cout << "Reversed: "<<rev<<"\n";
         _getch(); 
         system("cls");

}