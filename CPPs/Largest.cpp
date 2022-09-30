#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Largest.h"

using namespace std;

int Largest(int num1,int num2,int num3){   
    system("cls");
         int TL;
         TL = num1;
         if (TL < num2)
         TL = num2;
         if (TL < num3)
        TL = num3;
        return TL;
        
    }       // With Argument and with return value