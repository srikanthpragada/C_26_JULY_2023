#include <stdio.h>
#define FILENAME "marks.dat"

void main()
{
   FILE * fp;
   int marks, i;


    fp = fopen(FILENAME, "wb");  // write binary

    if(fp == NULL)
    {
      printf("Sorry! Could not open file %s. Quitting...", FILENAME);
      exit(1); // unsuccessful termination
    }

    srand(time(0));
    for(i = 1; i <= 20; i ++)
    {
        marks = rand() % 100;
        fwrite(&marks, sizeof(int), 1, fp);
    }

    fclose(fp);
}
