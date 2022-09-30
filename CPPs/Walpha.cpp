#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Walpha.h"

using namespace std;
typedef char sign;
void Walpha(){
    system("cls");
 sign lttr = 'A';
    
    cout<<"Alphabet: ";
    
    while (lttr <= 'Z')
    {
        cout << lttr << " ";
                lttr++;
    }
         _getch(); 
         system("cls");
   
}