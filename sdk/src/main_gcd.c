#include <math.h>
int main(void) {
   // declare some variables
   int  x,y,z,gcd;
   x = 32;
   y = 12;   
   // Loop for GCD evaluation
    while(x != y)
   {
       if(x > y)
           x = x - y;
       else
           y = y - x;
   } 
   gcd = x;
   z=gcd + 4;
   if (z>4)
	   z=1;
   else
	   z=0;

   // endless loop
   while(1){}
}