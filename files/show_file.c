#include <stdio.h>


void main()
{
   char filename[50];
   FILE * fp;
   int ch;


    printf("Enter filename :");
    gets(filename);

    fp = fopen(filename, "rt");

    if(fp == NULL)
    {
      printf("Sorry! Could not open file %s. Quitting...", filename);
      exit(1); // unsuccessful termination
    }

    while(1)
    {
        // read a line
    }

    fclose(fp);
}
