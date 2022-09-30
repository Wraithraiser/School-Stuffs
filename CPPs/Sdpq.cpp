#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>

#include "Sdpq.h"

using namespace std;


void Sdpq(){
    system("cls");
     int sum, dif, pro, quo;
     int x, y;
         cout << "Input First number: ";
         cin >> x;
         cout << "Input Second number: ";
         cin >> y;  

         sum = x+y;
         dif = x-y;
         pro = x*y;
         quo = x/y;       
        
         cout<<"\n\t\tThe sum of "<<x<<" and "<<y<<" is "<<sum<<endl;     
         cout<<"\n\t\tThe  difference of "<<x<<" and "<<y<<" is "<<dif<<endl;     
         cout<<"\n\t\tThe product of "<<x<<" and "<<y<<" is "<<pro<<endl;     
         cout<<"\n\t\tThe quotient of "<<x<<" and "<<y<<" is "<<quo<<endl;   
         _getch();
         system("cls");
    }     