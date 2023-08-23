// Create and use structure

#include <stdio.h>

struct time
{
  int h, m, s;
};

void main()
{
  struct time t1;
  int ts;

    printf("Enter time [hh mm ss] :");
    scanf("%d%d%d",&t1.h, &t1.m, &t1.s);

    if (t1.h > 12)
       printf("%02d:%02d:%02d PM", t1.h - 12, t1.m, t1.s);
    else
        if(t1.h == 12)
           printf("%02d:%02d:%02d PM", t1.h, t1.m, t1.s);
        else
           printf("%02d:%02d:%02d AM", t1.h, t1.m, t1.s);


    ts = t1.h * 3600 + t1.m * 60 + t1.s;

    printf("\nTotal Seconds = %d", ts);

}
