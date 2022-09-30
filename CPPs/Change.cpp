#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Change.h"

using namespace std;
void Change(){
    system("cls");
	int o,a;
	float c,t;
	// i put total amount of order and change in float because some items
	// might be in decimal form
	cout<<"input order number: ";
	cin>>o;
	cout<<"input total amount of order: ";
	cin>>t;
	cout<<"Input amount tender: ";
	cin>>a;
	c=a-(o*t);
	//this formula will give me the change
	cout<<"Your change is: "<<c<<" pesos";
	_getch();
        system("cls");
    }