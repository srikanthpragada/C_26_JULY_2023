#include <stdio.h>
#define FILENAME "marks.dat"

void main()
{
   FILE * fp;
   int marks, count;


    fp = fopen(FILENAME, "rb");  // write binary

    if(fp == NULL)
    {
      printf("Sorry! Could not open file %s. Quitting...", FILENAME);
      exit(1); // unsuccessful termination
    }

    while(1)
    {
        count = fread(&marks, sizeof(int), 1, fp);
        if(count == 0) // EOF
            break;

        printf("%d ", marks);
    }

    fclose(fp);
}
