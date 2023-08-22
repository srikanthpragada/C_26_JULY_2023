
#include<stdio.h>

void print(int arr[], int len)
{
 int i;

    for(i = 0; i < len; i ++)
        printf("%5d", arr[i]);

}

void set_zero(int arr[], int len)
{
 int i;

    for(i = 0; i < len; i ++)
        arr[i] = 0;

}

void main()
{
  int a[] = {10,20,30};
  int b[10];

   print(a, 3);
   set_zero(b, 10);
   print(b, 10);

}


