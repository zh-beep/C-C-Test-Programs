#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;




int main()
{


        
	std::map<int,int> ii;
	ii.insert(std::pair<int,int>(1,1));
	ii.insert(std::pair<int,int>(2,1));
	ii.insert(std::pair<int,int>(3,1));
	std::map<int,int>::iterator it = ii.begin();
	while(it != ii.end())
	{

		cout << it->first <<  endl;
		cout << it->second <<  endl;
		it++;
	}

	
 
	return 0;
	

}


