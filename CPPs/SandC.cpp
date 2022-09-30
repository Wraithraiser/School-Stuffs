#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>

#include "SandC.h"

using namespace std;

void SandC(){
    system("cls");
        int num, cu, sq;
        cout<<"\n\t\tEnter a number: ";
        cin>>num;
        sq=num*num;
        cu=sq*num;
        cout<<"\n\t\tThe square of the number is "<<sq<<"\n";
        cout<<"\n\t\tThe cube of the number is "<<cu;
        _getch();
    system("cls");
    }