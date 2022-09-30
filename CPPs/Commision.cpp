#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Commision.h"

using namespace std;

  void Commision(){
    system("cls");    
    float Sn, Us, Up, Ts;
                     float Ten, Fif, Twn, Thi;
                 string Sname;
    
                        cout<<"Enter salesman number: ";
                                cin>>Sn;
                        cout<<"Enter salesman name: ";
                                 cin>>Sname;
                         cout<<"Enter unit sold: ";
                                 cin>>Us;
                         cout<<"Enter unit price: ";
                                 cin>>Up;
    
                  Ts=Us*Up;
                     cout<<"\nTotal Sales: "<<Ts<<endl;
    
                          if (Ts<=10000)
                         {
                              cout<<"Commision: 10%\n";
                                Ten = Ts*.10;
                                      cout<<Ten;
                         }
                          else if(Ts<=15000)
                         {
                                cout<<"Commision: 15%\n";
                                      Fif = Ts*.15;
                                        cout<<Fif;
                         }   
                           else if(Ts<=20000)
                        {
                                 cout<<"Commision: 20%\n";
                                      Twn = Ts*.20;
                                   cout<<Twn;
                        }   
                            else
                        {
                                    cout<<"Commision: 30%\n";
                                        Thi = Ts*.30;
                                          cout<<Thi;
                         }
                            _getch(); 
                            system("cls");
    }