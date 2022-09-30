#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Feven.h"

using namespace std;

  void Feven(){
    system("cls");
    int num;
    
    cout<< "enter number: ";
    cin>>num;
    
    for (int i=1; i<=num; i=i+1)
    {
        cout << i << " ";
    } 
         _getch(); 
         system("cls");
}