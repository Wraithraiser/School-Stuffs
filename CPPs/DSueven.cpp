#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "DSueven.h"

using namespace std;

 void DSueven(){
    system("cls");
int number;
    int i=1;
    int sum = 0;
    
    cout<<"Enter a number: ";
    cin>>number;
    
    do{
        if (i%2==0){
            sum = sum + i;
        }
        i++;
    }
    while(i<=number);
    cout<<"Sum of even numbers: "<<sum<<"\n";
         _getch(); 
         system("cls");
  
}