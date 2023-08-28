#include <stdio.h>


void main()
{
   char filename[50], line[100], * p;
   FILE * fp;
   int lineno = 1;


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
        p = fgets(line, 100, fp); // read a line
        if(p == NULL) // EOF
            break;
        printf("%3d: %s", lineno, line);
        lineno ++;
    }

    fclose(fp);
}
