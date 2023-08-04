// Program to take marks in two subjects and display grade
// Date : 04-AUG-2023

#include <stdio.h>

void main()
{
 int m1, m2;


    printf("Enter marks in two subjects :");
    scanf("%d%d",&m1, &m2);

    if(m1 > 60)
        if(m2 > 60)
           printf("A");
        else
           printf("B");
    else
        if(m2 > 60)
           printf("C");
        else
           printf("D");
}
