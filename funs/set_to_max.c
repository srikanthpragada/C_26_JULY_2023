
#include<stdio.h>

void set_max(int *a, int *b)
{
   if(*a > *b)
      *b  = *a;
   else
      *a = *b;
}

void main()
{
  int x = 10, y = 20;

     set_max(&x, &y);
     printf("%d %d", x, y);

}


