#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main()
{


        map<int,int> mp;
	//mp.insert(pair<int, int>(100,10));
	mp.insert(pair<int, int>(160, 42));
	map<int,int>::iterator itr;
	for (itr = mp.begin(); itr != mp.end(); ++itr){
		cout<< itr->first << " " <<  itr->second << endl;

	}

    
	return 0;
	

}


