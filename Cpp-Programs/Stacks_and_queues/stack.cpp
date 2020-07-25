#include <stack>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
	stack <int> stck;
	stck.push(20);
	//iterators don't work with stacks
	//stack<int>::iterator s = stck.begin();


	while(!stck.empty() )
	{
		
		cout << stck.top() << endl;
		stck.pop();
	}


	/*
	map<int,int> test;
	test.insert(pair<int,int>(2,2));
	map<char,char> ctest;
	ctest.insert(pair<char,char>('a','b'));

	map<int,int>::iterator it = test.begin();
	map<char,char>::iterator it1 = ctest.begin();

	while(it != test.end() )
	{
		cout << it->first << " " << it->second << " " << endl;
		++it;
	}

	while(it1 != ctest.end() )
	{
		cout << it1->first << " " << it1->second << " " << endl;
		++it1;
	}
	
	*/	
		

}


