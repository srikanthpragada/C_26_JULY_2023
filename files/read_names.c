#include <stdio.h>


void main()
{
   FILE * fp;
   int ch;


    fp = fopen("names.txt", "rt");

    while(1)
    {
        ch = fgetc(fp); // read one char
        if(ch == EOF)  // end of file
            break;

        putchar(ch);
    }

    fclose(fp);
}
