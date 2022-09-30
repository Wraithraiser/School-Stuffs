#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "VandC.h"

using namespace std;
typedef char sign;
void VandC(){
    system("cls");
                        sign ltr;
                         cout<<"Input a letter to identify if Vowel or Consonant"<<endl;
                         cout<<"Enter a letter: ";
                             cin>>ltr;
    
    if (ltr == 'a' || ltr == 'A')
		cout << ltr<<" is a Vowel";
	else if (ltr == 'e' || ltr == 'E')
		cout <<ltr <<" is a Vowel";
	else if (ltr == 'i' || ltr == 'I')
		cout <<ltr<<" is a Vowel";
	else if (ltr == 'o' || ltr== 'O')
		cout << ltr<<" is a Vowel";
	else if (ltr == 'u' || ltr == 'U')
		cout << ltr<<" is a Vowel";
	else
		cout << ltr<<" is a Consonant";
                            _getch(); 
    system("cls");
    }