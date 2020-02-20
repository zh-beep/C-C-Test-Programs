#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;


char * reverse_string(char *word)
{


	//int len = sizeof(word)/sizeof(word[0]);
        //cout << "size of word is:" << sizeof(word) << strlen(word) << " size of word[0] is:" << sizeof(word[0]) << endl;	
	int len = strlen(word);
	cout<< "len is: " << len << endl;	
	//cout << *(&word + 1) << endl;
	/*cout << "*word:" << *word << endl;
	cout << "word:" << word[1] << endl;
	word[1] = 'a';
	cout << "word:" << word[1] << endl;
	cout << &word << endl;
	*/
	char * temp = (char *) malloc(sizeof(char) * strlen(word));
	for (int i = 0; i < len; i++)
	{
		temp[i] = word[len -1 - i];
		//cout << word[i] << endl;
	}
	word = temp;
	cout << temp << endl;
	free(temp);	
	return word;

}

int main()
{
	char s3[20];	
	cin >> s3;
	cout << reverse_string(s3) << endl;
}
