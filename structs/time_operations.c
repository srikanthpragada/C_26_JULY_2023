// Create and use structure

#include <stdio.h>

struct time
{
  int h, m, s;
};

typedef struct time TIME;
typedef int number;

number a;


void print(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

// 0 -> t1 == t2, >0  -> t1 > t2, < 0 -> t1 < t2

int compare(struct time t1, struct time t2)
{
    return totalseconds(t1) - totalseconds(t2);
}

// Return the largest of two
struct time max(struct time t1, struct time t2)
{
    if (totalseconds(t1) > totalseconds(t2))
        return t1;
    else
        return t2;
}

void reset(struct time * tp)
{
    tp -> h  = 0;
    tp -> m  = 0;
    tp -> s  = 0;
}

void main()
{
  struct time t1 = {10,20,30};
  struct time t2 = {11,20,30};
  struct time t3;

    reset(&t1);

    print(t1);
    printf("\n%d ", compare(t1,t2));

    t3 = max(t1,t2);
    print(t3);

}
