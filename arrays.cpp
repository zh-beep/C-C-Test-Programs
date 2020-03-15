#include <iostream>
using namespace std;

int main()
{
	//Allocating a 2D Array: 
        //1. By allocating an array of pointers
    	// int *arr[r];
	int* arr;
        arr= (int*) malloc(10*sizeof(int));
	arr[0] = 1;
	arr[1] = 2;	
	for (int i = 0; i < 10; i++){
		
		cout << *(arr + i) << endl;
	

		
	}
}	
