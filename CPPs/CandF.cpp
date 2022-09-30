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

void CandF(){
    system("cls");
	float c, f;
	cout<<"\n\t\tInput Celsius: ";
	cin>>c;
        try{
            if(c == 0)
                throw 0;
	f=32+(c*1.8);
	//formula to get the Farenheit
	cout<<"\n\t\t"<<c<<" in celcius is "<<f<<" in farenheit";
        }catch(int e){
            cout << "Exception Happened: "<<e<<endl;
        }
	_getch();
        system("cls");
    }