// Program take an array of 5 X 5 and fill it with random numbers and then
// search for a number
// Date : 14-AUG-2023

#include <stdio.h>

void main()
{
    int a[5][5];
    int i, j, sn, found = 0;


    srand(time(0)); // init seed

    for(i = 0; i < 5; i ++)
    {
      for(j = 0; j < 5; j ++)
      {
          a[i][j] = rand() % 100;
          printf("%5d", a[i][j]);
      }
      printf("\n");
    }

    printf("\nEnter number : ");
    scanf("%d", &sn);

    for(i = 0; i < 5; i ++)
    {
      for(j = 0; j < 5; j ++)
      {
          if(a[i][j] == sn)
          {
             printf("\n%d, %d", i, j);
             found = 1;
             break;
          }
      }
      // exit outer loop
      if(found)
         break;
    }

    if(!found)
        printf("\nSorry! Not found!");


}
