// Function to fill an array

#include <stdio.h>

void fill_array(int a[10])
{
 int i;

    srand(time(0));
    for(i = 0; i < 10; i ++)
       a[i] = rand() % 100;
}

void print_array(int a[10])
{
 int i;

    for(i = 0; i < 10; i ++)
        printf("%5d", a[i]);

}

void main()
{
 int arr[10];

     fill_array(arr);
     print_array(arr);
}
