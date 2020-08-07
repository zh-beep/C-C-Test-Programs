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
	if (stck.top() == 20){
		cout << "popped off" << endl;
	}
	//iterators don't work with stacks
	//stack<int>::iterator s = stck.begin();


	while(!stck.empty() )
	{
		
		cout << stck.top() << endl;
		stck.pop();
	}


		

}


