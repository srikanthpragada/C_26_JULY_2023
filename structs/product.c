// Create and use structure

#include <stdio.h>

struct product
{
  // Members
  char name[20];
  int price, qoh;
};

void main()
{
  struct product p1;

    p1.price = 10000;
    p1.qoh = 5;
    strcpy(p1.name,"Mouse");

    printf("%s  %d  %d", p1.name, p1.price, p1.qoh);


}
