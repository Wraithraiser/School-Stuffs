#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "WSuofSq.h"

using namespace std;

 void WSuofSq(){
    system("cls");
  int a, b;
    int sq = 0;
    
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    
   int i=a;
   
   while (i<=b)
   {
       if (i%2 ==0)
       {
           sq = sq + i * i;
       }
       i++;
   }
            
   cout<<"Sum of all square of all even number: "<<sq<<"\n";
         _getch(); 
         system("cls");
   
}