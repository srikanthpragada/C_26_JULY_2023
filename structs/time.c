// Create and use structure

#include <stdio.h>

struct time
{
  int h, m, s;
};

void main()
{
  struct time t1;

    printf("Enter time [hh mm ss] :");
    scanf("%d%d%d",&t1.h, &t1.m, &t1.s);

    printf("%d:%d:%d", t1.h, t1.m, t1.s);
}
