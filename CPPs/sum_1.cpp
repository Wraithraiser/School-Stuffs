#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;

int sum(int array[][100], int row, int col, int cube){
    system("cls");
    int sum;
    sum=0;
    cube = 0;
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            sum=sum+array[i][j];
        }
    }
    
   cout << "\nThe sum of all elements is: "<<sum;
   
   for (int i = 0; i < row; i++)
   {
       for (int j = 0; j < col; j++)
       {
           cube = cube + array[i][j]* array[i][j]* array[i][j];
           
       }
   }
   return cube;
    
   _getch();
    system("cls");
}
