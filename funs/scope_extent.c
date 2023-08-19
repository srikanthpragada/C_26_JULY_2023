
#include<stdio.h>
#include<string.h>

int g = 10; // global variable

void f1()
{
  int b = 1, g = 2;

   printf("%d %d", b, g);
}


void main()
{
  int a;

    f1();

}

