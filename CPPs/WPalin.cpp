#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "WPalin.h"

using namespace std;
typedef char sign;
void WPalin(){
    system("cls");
    sign word[50];
    int lenght;
    int rev = 0;
    
    cout << "Type a Word: ";
    cin>>word;
    
    int i=1;
    lenght = strlen(word)-1;
    
    while (lenght>rev)
    {
        if (word[rev++] !=word[lenght--])
        {
            cout << word << " is not a palindrome \n";
           
        }
    }
    
    cout << word<< " is a palindrome \n";
         _getch(); 
         system("cls");
   
}