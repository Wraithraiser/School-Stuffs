#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Grades.h"

using namespace std;
 
void Grades(){
    system("cls");
    float P, M, F, A;
    
                            cout<<"Enter Prelim: ";
                                cin>>P;
                            cout<<"Enter Midterm: ";
                                cin>>M;
                             cout<<"Enter Finals: ";
                                cin>>F;
                        
                                float sum = P+M+F;
                
                 
                            cout << fixed << setprecision(2);
                              A = sum/3;
    
                            cout<<endl;
    
                            cout<<"Your Average is "<<A<<"%"<<endl;
    
                              if(A>=75){
                                     cout<<"You Passed";
                               }
                              else if (A<75){
                                      cout<<"You Failed";
                                 }
                             else{
                                       cout<<"Error";
                                     }
                            _getch(); 
    system("cls");
    }