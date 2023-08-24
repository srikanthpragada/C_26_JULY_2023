// Create and use structure

#include <stdio.h>

enum week
{
     MON, TUE, WED, THU, FRI, SAT, SUN
};

enum paymentmode
{
    CASH, NEFT, UPI
};


void main()
{
  enum week day;
  enum paymentmode  feemode;

    day = MON;  // Mon
    feemode = UPI;

    if(day == MON)
         printf("Monday");

}
