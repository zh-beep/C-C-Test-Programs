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
	
        //if exists, return true
        //else, add to hashmap
	/*	
	if(temp_map[hashNum] > 0)
	{

		//hash_array.insert(pair<int,int>(hashNum,1));
		temp_map[hashNum] = temp_map[hashNum]++;
		cout<<"if"<<endl;


	}
	else
	{
	
		temp_map.insert(pair<int,int>(hashNum,1));
		//temp_map[hashNum] = 1;
		cout<<"else"<<endl;
		

	}
	*/

	temp_map.insert(pair<int,int>(hashNum,20));
	cout << temp_map[hashNum] << endl;

	


}



int main()
{
	vector<int> vect;
	map<int,int> hash_array;	
	//map* mapptr = &hash_array;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	vect.push_back(4);
	vect.push_back(4);
	hash_map(19,hash_array);

	//hash_map(0,hash_array);
	//hash_array.insert(pair<int,int>(100,1));
	//cout << hash_array[100] << endl;

	
	/*
	std:;vector<int>:;iterator it = vect.begin;
	for(it = vect.begin();it < vect.end(); it++)
	{

		hash_map(x,hash_

	}*/
	/*	
	for (int x : vect)
	{
		
		
		hash_map(x,hash_array);

	}*/

	cout << hash_array[19] << endl;
	return 0;
	

}


