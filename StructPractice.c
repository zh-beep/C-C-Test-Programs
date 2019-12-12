#include <stdio.h>
#include <stdlib.h>

struct test
{
    int x;
    char ra[3];
};
/*
struct test
{
    int x;
    char ra[3];
}t1;
*/


int main()
{

    struct test t2;
    memcpy(t2.ra, "Wow",3);
    //t2.ra = {"Wow"};
    t2.x = 4;
    printf("Int is %d \n String is %s \n",t2.x,t2.ra);
}

