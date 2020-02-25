#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    node* next; 
};


int main()
{

    struct node* first = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
	
    
    
    first = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));

    first->value = 1;
    second->value = 2;
    third->value = 3;

    first->next = second;
    second->next = third;
    third->next = NULL;
}

