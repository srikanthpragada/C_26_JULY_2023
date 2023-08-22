
#include<stdio.h>

void print(int arr[3])
{


}

void main()
{
  int a[] = {10,20,30};
  int *p;

   p = a;

   printf("%u %d %d %u\n", a, *a, a[0], &a[0]);
   printf("%u %d %d %u", p, *p, p[0], &p[0]);

   print(a);


}


