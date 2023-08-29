#include <stdio.h>
#define FILENAME "marks.dat"

void main()
{
   FILE * fp;
   int marks, rollno, pos, count;


    fp = fopen(FILENAME, "rb");  // write binary

    if(fp == NULL)
    {
      printf("Sorry! Could not open file %s. Quitting...", FILENAME);
      exit(1); // unsuccessful termination
    }

    printf("Enter rollno : ");
    scanf("%d", &rollno);

    pos = (rollno - 1) * sizeof(int);
    fseek(fp, pos, SEEK_SET); // Random Access

    count = fread(&marks, sizeof(int), 1, fp);
    if(count == 1)
        printf("%d ", marks);
    else
        printf("Sorry! Rollno not found!");


    fclose(fp);
}
