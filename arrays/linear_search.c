// Linear Search
// Date : 11-AUG-2023

#include <stdio.h>

void main()
{
    int a[10];
    int i, n, found = 0;


    srand(time(0)); // init seed
    for(i = 0; i < 10; i ++)
    {
       a[i] = rand() % 100;
       printf("%5d", a[i]);
    }

    printf("\nEnter search number :");
    scanf("%d", &n);

    for(i = 0; i < 10; i ++)
    {
        if(a[i] == n)
        {
            printf("Found at %d", i);
            found = 1;
            break;
        }
    }

    if(!found)
      printf("Sorry! Not found");

}
