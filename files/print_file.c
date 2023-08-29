#include <stdio.h>


void main(int argc, char * argv[])
{
   char   line[100], * p;
   FILE * fp;
   int lineno = 1;


    fp = fopen(argv[1], "rt");

    if(fp == NULL)
    {
      printf("Sorry! Could not open file %s. Quitting...", argv[1]);
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
