#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "PNN.h"

using namespace std;

void PNN(){
    system("cls");
            int num;
            cout<<"Input a number to identify if its a Positive, Negative or Neutral: ";
            cin>>num;
            
            if(num==0)
                cout<<num<<" is Neutral\n";
            else
            {
             if (num<0)
            cout<<num<<" is Negative\n";
        
             else if (num>0)
            cout<<num<<" is Positive\n";
            }
                  _getch(); 
    system("cls");
    }