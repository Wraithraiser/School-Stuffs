#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Total.h"

using namespace std;
typedef char sign;
void Total(){
    system("cls");
	int sn, s, p, ts;
	sign name[50];
	cout<<"Input salesman number: ";
	cin>>sn;
	cout<<"Input salesman name: ";
	cin>>name;
	cout<<"Input unit sold: ";
	cin>>s;
	cout<<"Input unit price: ";
	cin>>p;
	ts=s*p;
	cout<<"The total sales is: "<<ts<<" Pesos";
	_getch();
        system("cls");
    }