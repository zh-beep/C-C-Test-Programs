#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
bool hashTable(int* point, int* value){


	//make hashtable
	int index = *value % 10; //assume you know the max, should add as argument
	//check if it already exists in the hashmap
	if (*(point + index) == *value) {
		return 1;
	}else{
	*(point + index) = *value;
	}	
	//*(point + index)
	return 0;

}

int main(){

	int ra[10] = {1,2,3,4,5,6,7,8,9,9};
	//assuming we know what the max of the array is
	int hashra[10];
	int * pointer = hashra;	

	for (int i = 0; i < 10; i++){

	
		//cout << hashTable(pointer,(&ra[i])) << endl;

		cout << hashTable(pointer, &ra[i] ) << endl;
		
	}
	//loop to go through and send each element of array to hashtable
	
	//set pointer to arra
	
	//function to check if value is in a hashmap	
	
	//loop here to check if in hashtable


		

		
}
