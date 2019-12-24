#include <stdio.h>
#include <stdlib.h>

int* createArray(int size)
{
    int* a = malloc(sizeof(int) * size));
    



}

int main()
{
    
    int a = 4;
    int *b = malloc(sizeof(int));
    *b = 10;
    printf("val = %d,ptr = %p\n",*b,(void *) b);
    free(b);
    printf("val = %d,ptr = %p\n",*b,(void *) b);
    

    return 0;
}

