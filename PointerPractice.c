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
    //printf("The two numbers are %d and %d\n",2,3);
    int a = 2;
    //int b = 3;
    int *p = malloc(sizeof(int));
    *p = 10;
    dostuff(p);
    dostuff(&a);
    //swap(&a,&b);
    //printf("Hello world! - this is Zanir\n");
    return 0;
}

