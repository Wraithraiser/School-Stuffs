#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include "Dpalin.h"

using namespace std;

typedef char sign;

 void Dpalin(){
    system("cls");
  sign word[50];
    int length, i;
    
    cout<<"Enter a word: ";
    cin>>word;
    
    int rev = 0;
    length = strlen(word)-1;
    
    do{
        if (word[rev++] != word[length--])
        {
            cout<<word<<" is not a palindrome \n";
         
        }
    }
    while(length>rev);
    cout << word<< " is a palindrome \n";
         _getch(); 
         system("cls");
   
}