#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;


char * reverse_string(char *word)
{


	//int len = sizeof(word)/sizeof(word[0]);
        cout << "size of word is:" << sizeof(word) << "size of word[0] is:" << sizeof(word[0]) << endl;	
	int len = 0;
	cout<< len << endl;	
	//cout << *(&word + 1) << endl;
	cout << "*word:" << *word << endl;
	cout << "word:" << word[1] << endl;
	word[1] = 'a';
	cout << "word:" << word[1] << endl;
	cout << &word << endl;

	for (int i = 0; i < len; i++)
	{
		word[i] = word[len -1 + i];
		cout << word[i] << endl;
	}	
	return word;


}

int main()
{
	//const char * name = "John Doe";
	
	//cout << &name << endl;
	//const char* name;
	//cin >> *name;
	char s3[20];	
	cin >> s3;
	reverse_string(s3);
}
