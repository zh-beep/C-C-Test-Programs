#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;




int main()
{
    
   //Structs

   struct test{
	char a[10];
   }; 
   
    struct test arr[2];
    strncpy(arr[0].a,"abc      ",sizeof(arr[0].a));
//    arr[0].a = "abc      ";
    cout << arr[0].a << endl;
    //Maps
    


    return 0;
}

