#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


struct node
{
    int value;
    node* next; 
};


void traverseList(node* head)
{
	while (head!= NULL)
	{
		cout << head->value << endl;
		head =head->next;
	}

}


struct node * reverseList(node* point)
{
	//the first thing that's passed in is the head of 
	//the linked list	
	struct node* temp;
	temp = (struct node *) malloc(sizeof(struct node));	
        temp->next= NULL; 
	temp->value = 1;
	struct node* prev= NULL;
	prev = (struct node *) malloc(sizeof(struct node));	
	temp->next= NULL; 
	temp->value = 1;
	traverseList(point);
	cout << "first one" << endl;

	while (point !=NULL&& point->next != NULL){
	//cout << point->value << endl;
	temp=point->next;	
	point->next=prev;	
	prev=point;
	point=temp;
	//cout << point->value << endl;
	

	}	
	traverseList(prev);	
	free(temp);
	free(prev);
	
	//traverseList(point);		
	return point;
		
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

