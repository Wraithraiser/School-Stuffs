#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Prime.h"

using namespace std;

void Prime(){
    system("cls");
                        cout << "input a number to identify whether prime number or not\n";
                    int nums;
                    cout << "enter number : ";
	cin >> nums;

            if (nums == 0 || nums == 1)
	cout << nums << " is NOT a prime number";

            else if (nums == 2 || nums == 3) {
	cout << nums << " is a prime number number" << endl;
	}
            else if (nums % 2 == 0 || nums % 3 == 0) {
	cout << nums << " is NOT a prime number" << endl;
	}
            else {
	cout << nums << " is a prime number" << endl;
	}
                  _getch(); 
    system("cls");
    }