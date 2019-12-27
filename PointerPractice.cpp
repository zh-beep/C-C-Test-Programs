#include <stdio.h>
#include <stdlib.h>

void swap(int* px, int* py){
	int temp; 
	temp = *px;
        printf("temp: %d, *px: %d\n",temp,*px);
	*px = *py;
        printf("*px: %d, *py: %d\n",*px,*py);
	*py = temp;
        printf("*px: %d, *py: %d\n",*px,*py) ;
}


void dostuff(int* L){
     printf("%d multiplied by 7 is:",*L);
     *L = *L * 7;
     printf("%d \n",*L);

}


int main()
{
    int a = 4;
    int *b = malloc(sizeof(int));
    *b = 10;
    printf("val = %d,ptr = %p\n",*b,b);
    free(b);
    //printf("val = %d,ptr = %p\n",*b,(void *) b);
    

    return 0;
}

