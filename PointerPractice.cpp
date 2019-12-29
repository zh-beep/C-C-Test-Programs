#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



int main()
{
    int* a =(int*) malloc(sizeof(int));
    *a = 10;
    cout << "*a = " <<*a << " address of a is:" << a << endl;
    cout<< "*a++ = " << (*a)+1 << " a++:" << a+1 << endl;
    free(a);
    return 0;
}

