#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

	vector<int> test;
	test.assign(4,3);
	test.push_back(76);
	test.insert(test.begin(),1000);

	for (int i = 0; i < test.size(); i++)
	{
		cout << test[i] << endl;
	}

	return 0;

}

