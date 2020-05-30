#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string s1 = "one";
	string s2 = "two";

	string s3 = "one4";
	string s4 = "three";

	cout << s1 << " " << s3 << " " << s1.compare(s3) << endl; 	
	cout << s1 << " " << s3 << " " << s1.compare(0,3,s3,0,3) << endl; 	

}



