
#include <stdio.h>

void equals(int n1, int n2)
{
   if(n1 == n2)
     printf("Equal");
   else
     printf("Not equal");
}

void main()
{
    int a = 10,  b = 20;

    equals(a, b);
}
