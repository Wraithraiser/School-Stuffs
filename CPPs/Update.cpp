#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

void Update(int score[],int i, int j, int index){
    system("cls");
    int x;
    x = 0;
    cout << "\nOld array elements: ";
    for (i; i<index;i++)
    {
        cout << score[i] << " ";
    }
    cout << "\nUpdated Array: ";
    for (int j = 0; j < index; j++)
    {
        x = x+3;
        cin >> score[j];
    }
    _getch();
}                           // A function with arguments and does not returns a value