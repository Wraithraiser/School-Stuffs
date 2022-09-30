#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>

#include "Quadra.h"


using namespace std;

void Quadra(){
    system("cls");
        float a, b, c, x1, x2;
        cout << "\n\t\tEnter the value of a: ";
        cin >> a;
        cout << "\n\t\tEnter the value of b: ";
        cin >> b;
        cout << "\n\t\tEnter the value of c: ";
        cin >> c;
        x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
        x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
        cout << "\n\t\tThe roots of quadratic equation is: x1= " << x1 << endl;
        cout << "\n\t\tThe second root = "<<x2<<endl;
       _getch();
       
    system("cls");
    }