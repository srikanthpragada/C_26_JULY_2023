#include <stdio.h>
#define FILENAME "names.txt"

void main()
{
   char line[100], name[30], * p;
   FILE * fp;
   int found = 0;

    fp = fopen(FILENAME, "rt");

    if(fp == NULL)
    {
      printf("Sorry! Could not open file %s. Quitting...", FILENAME);
      exit(1); // unsuccessful termination
    }

    printf("Enter name :");
    gets(name);

    while(1)
    {
        // read a line
        p = fgets(line, 100, fp); // read a line
        if(p == NULL) // EOF
            break;

        // remove \n from line as fgets() returns line with \n
        line[strlen(line) - 1] = '\0';

        if(stricmp(line, name) == 0)
        {
            printf("Found!");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Not Found!");

    fclose(fp);
}
