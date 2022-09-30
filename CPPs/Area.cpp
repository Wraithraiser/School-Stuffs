#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>

#include "Area.h"

using namespace std;

void Area(){
    system("cls");
	float d, ar, cir;
	cout<<"\n\t\tinput the diameter: ";
	cin>>d;
        try{
            if(d==0)
                throw 0;
	ar=3.14*(d/2)*(d/2);
	//formula for area
	cir=d*3.14;
	//formula for circumference
	cout<<"\n\t\tThe Area is: "<<ar<<endl;
	cout<<"\n\t\tThe Circumference is: "<<cir<<endl;
        }catch(int e){
            cout << "Exception Happened :"<<e<<endl;
        }
	_getch();
        system("cls");
    }