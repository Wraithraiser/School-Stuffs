#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

void display(int fscore[], int index){              
    system("cls");
    for(int i=0; i<index; i++)
        cout << fscore[i]<<" ";
    _getch();
    system("cls");
}             // Function with arguments and does NOT return value            