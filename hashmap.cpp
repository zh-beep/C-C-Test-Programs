#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include <vector>
using namespace std;

void hash_map(int hashNum, map<int,int> &temp_map )
{
	if( temp_map.find(hashNum) == temp_map.end() )
	{

		temp_map.insert(pair<int,int>(hashNum,1));
		//cout<<"if"<<endl;


	}
	else
	{
	
		temp_map.find(hashNum)->second = temp_map[hashNum] + 1;
		//cout<<"else"<<endl;
		

	}

	//This one works: 
	//temp_map.insert(pair<int,int>(hashNum,1));

	


}



int main()
{
	vector<int> vect;
	map<int,int> hash_array;	
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	vect.push_back(4);
	vect.push_back(4);
	hash_map(19,hash_array);
	hash_map(3,hash_array);
	hash_map(3,hash_array);
	hash_map(3,hash_array);



	map<int,int>::iterator it = hash_array.begin();
	while (it != hash_array.end())
	{

		cout << "Key: " << it->first << " Hash value: " << it->second <<  endl;
		it++;
	}



	return 0;
	

}


