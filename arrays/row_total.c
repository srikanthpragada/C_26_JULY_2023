// Program take an array of 5 X 5 and fill it with random numbers
// Date : 14-AUG-2023

#include <stdio.h>

void main()
{
    int a[5][5];
    int i, j, total;


    srand(time(0)); // init seed

    for(i = 0; i < 5; i ++)
    {
      total = 0;
      for(j = 0; j < 5; j ++)
      {
          a[i][j] = rand() % 100;
          total += a[i][j];
          printf("%5d", a[i][j]);
      }
      printf("%5d\n", total);
    }
}
