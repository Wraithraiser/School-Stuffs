#include <iostream>
#include <conio.h>



int recsum(int m, int value){
    
    if (m == value)
        return m;
    return m + recsum(m + 1, value);
    
}

int fibonnaci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonnaci(x-1)+fibonnaci(x-2));
   }
}

int f(int n){
   if (n <= 1)
        return 1;
   else 
       return n*f(n-1);
}
