#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


struct node
{
    int value;
    node* next; 
};

struct node * reverseList(node* point)
{
	//the first thing that's passed in is the head of 
	//the linked list	
	struct node* temp = NULL;
	temp = (struct node *) malloc(sizeof(struct node));	
	struct node* prev= NULL;
	prev = (struct node *) malloc(sizeof(struct node));	
	while (point !=NULL){
	cout<<point->value<<endl;	
	temp = curr.next;
	point->next = prev;
	

	}	

	free(temp);
	free(prev);
	return point;
		
}


void traverseList(node* point)
{
	while (point!= NULL)
	{
		cout << point->value << endl;
		point = point->next;
	}

}


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

    //traverseList(first);
    reverseList(first);

    free(first);
    free(second);
    free(third);
}

