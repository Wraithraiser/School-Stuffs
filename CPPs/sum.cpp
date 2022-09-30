#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

int sum(int score[],int NumofE, int cube){
    system("cls");
    int sum;
    sum=0;
    for(int i=0; i<NumofE; i++)
    sum=sum+score[i];
   cout << "\nThe sum of all elements is: "<<sum;
   
   for (int i = 0; i < NumofE; i++)
           cube += score[i] * score[i] * score[i];
   return cube;
    
   _getch();
    system("cls");
}                   // Function with arguments and returns a value