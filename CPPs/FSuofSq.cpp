#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "FSuofSq.h"

using namespace std;

    void FSuofSq(){
    system("cls");
    int a,b;
    int sq=0;
    
    cout<<"First number: ";
    cin>>a;
    cout<<"Second number: ";
    cin>>b;
    
    for(int i =a; i<=b; i++)
    {
        if(i%2==0)
        {
            sq += i*i;
        }
    }
       
    cout<<"Sum of the square of all even number: "<<sq;
         _getch(); 
         system("cls");
    
}