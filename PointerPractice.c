#include <stdio.h>
#include <stdlib.h>

int* createArray(int size)
{
    int* a = malloc(sizeof(int) * size);
    a[0] = 98;
    return a; 



}

int main()
{
    int* num = malloc(sizeof(int));
    *num = 7;
    int* list = createArray(*num);
    for (int i = 0; i < *num; i++) 
    {
    printf("%d",list[i]);
    }
    printf("\n");
    free(list);
    free(num);
    printf("ptr1 = %p,ptr2 = %p\n",(void *) list,(void *) num);
    
    /*
    int a = 4;
    int *b = malloc(sizeof(int));
    *b = 10;
    printf("val = %d,ptr = %p\n",*b,(void *) b);
    free(b);
    printf("val = %d,ptr = %p\n",*b,(void *) b);
    */

    return 0;
}

