
#include <stdio.h>

void line(char ch)
{
 int i;

    for(i = 1; i <= 30; i ++)
       putch(ch);
}

void main()
{
     line('*');
     printf("\nSrikanth Technologies\n");
     line('.');
}
