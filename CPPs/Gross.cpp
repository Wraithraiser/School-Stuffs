#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>

#include "Gross.h"

using namespace std;
typedef char sign;
void Gross(){
    system("cls");
	float en, N, R, Grosspay, Netpay;
	sign Name[1000];
	cout<<"\n\t\tEnter employee number: ";
	cin>>en;
	cout<<"\n\t\tEnter employee name: ";
	cin>>Name;
	cout<<"\n\t\tEnter number of hours worked: ";
	cin>>N;
	cout<<"\n\t\tEnter rate per hour: ";
	cin>>R;
	Grosspay=N*R;
	Netpay=Grosspay-(Grosspay*0.1);
	cout<<"\n\t\tYour Grosspay: "<<Grosspay<<" Pesos"<<endl;
	cout<<"\n\t\tYour Netpay: "<<Netpay<<" Pesos";
	_getch();
        system("cls");            
    }