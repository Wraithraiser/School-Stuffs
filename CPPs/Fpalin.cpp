#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Fpalin.h"

using namespace std;
typedef char sign;

  void Fpalin(){
    system("cls");
    sign word[50];
    int lenght = 0;
    bool NP = false;
    
    cout << "Enter Word: ";
            cin>>word;
    
    lenght= strlen(word);
    
    for (int i = 0; i<lenght; i++)
    {
        if(word[i] != word[lenght -i-1])
        {
            NP=true;
            break;
        }
    }
    
    if (NP==false)
        cout<<word<<" is a Palindrome \n";
    else
    {
        cout<<word<<" is Not a palindrome \n";
    }
         _getch(); 
         system("cls");

}