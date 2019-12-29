#include <iostream>
using namespace std;

int main()
{
    //Allocating a 2D Array: 
    //1. By allocating an array of pointers
    int *arr[r];
    
    int a[3][2] = { {0,0}, {1,1}, {2,2}};
    //3 rows, 2 columns
    for ( int i = 0; i < 3; i++)
    {
        for( int j = 0; j < 2; j++)
	{
        cout << "a[" << i << "] b[" <<  j << "]:" << a[i][j] << endl;

        }
    }



}	
