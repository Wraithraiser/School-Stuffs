#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>

#include "Swap.h"

using namespace std;

void Swap(){
    system("cls");
	int x, y, z;
	cout<<"\n\t\tInput a variable: ";
	cin>>x;
	cout<<"\n\t\tInput a variable: ";
	cin>>y;
	z=x;
	x=y;
	y=z;
	cout<<"\n\t\t"<<x<<" "<<y;
	_getch();
        system("cls");
    }