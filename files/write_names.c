#include <stdio.h>


void main()
{
   FILE * fp;
   char names[][20] = {"Java","JavaScript","Python","PL/SQL ", "TypeScript"};
   int i;


    fp = fopen("names.txt", "wt");

    for(i = 0; i < 5; i ++)
    {
       fprintf(fp, "%s\n", names[i]);
    }

    fclose(fp);
}
