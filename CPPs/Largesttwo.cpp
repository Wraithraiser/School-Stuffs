#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Largesttwo.h"

using namespace std;

  void Largesttwo(){
    system("cls");
                int num11, num22;
    
                    cout<<"input 2 numbers to determine the largest between them\n";
                    cout<<"First Number: ";
                        cin>>num11;
                     cout<<"Second Number: ";
                        cin>>num22;
                    cout<<endl<<endl;
    
                 if(num11>num22) 
                 {
                     cout<<"Largest: "<<num11;
                  }
                      else if(num11<num22)
                  {
                        cout<<"Largest: "<<num22;
                  }
                        else if (num11==num22)
                {
                          cout<<num11<<" and "<<num22<<" are both Equal";
                  }
                  _getch(); 
    system("cls");
    }