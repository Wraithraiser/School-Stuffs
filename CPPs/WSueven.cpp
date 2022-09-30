#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "WSueven.h"

using namespace std;

void WSueven(){
    system("cls");
    int num;
    int i=1;
    int sum = 0;
    
    cout <<"Enter number: ";
    cin>>num;
    
    while (i<=num)
    {
        if (i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    
    cout<<"Sum of all even numbers: "<<sum<<"\n";
         _getch(); 
         system("cls");
   
}