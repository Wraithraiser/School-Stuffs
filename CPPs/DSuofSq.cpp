#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "DSuofSq.h"

using namespace std;

 void DSuofSq(){
    system("cls");
    int a, b;
    int sq=0;
    int i = 0;
    
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter Second number: ";
    cin>>b;
    
    do{
        if(i%2==0){
            sq=sq+i*i;
        }
        i++;
    }
    while(i<=b);
    
    cout<<"Sum of all square of even numbers: "<< sq<<"\n";
         _getch(); 
         system("cls");
   
}