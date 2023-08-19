
#include<stdio.h>
#include<string.h>


void reverse(int n)
{
   if(n > 0)
   {
       printf("%d ",n);
       reverse(n - 1); // recursion
   }
}



void main()
{
     reverse(5);
}

