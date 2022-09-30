#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>

#include "AandP.h"

using namespace std;

void AandP(){
    system("cls");
	int l, w, ar, pe;
                  cout<<"\n\t\tInput a value for length: ";
	cin>>l;
	cout<<"\n\t\tInput a value for width: ";
	cin>>w;
                  try{
                      if(l == 0)
                          throw 1;
                      else if(w == 0)
                          throw 2;
	ar=l*w;
	pe=2*(l+w);
	cout<<"\n\t\tThe area is: "<<ar;
	cout<<"\n\t\tThe perimeter is: "<<pe;
                  }
                  catch(int e){
                      cout << "\n\t\tZero Detected";
                  }
	_getch();
    system("cls");
    }   // function without argument and does not returns a value