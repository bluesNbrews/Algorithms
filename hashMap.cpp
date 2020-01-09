/*
Unordered map (STL) in C++
1) Retrieve existing value based on key
2) Add key value pair
3) Print all keys
4) Print all values
Insert and access is in O(1) for an unordered map.
Deletion?
Run -std=c++11 for C++11 extension of auto (g++)
*/

#include <unordered_map>
#include <iostream>

using namespace std;

int main(){

	unordered_map<int, string> myHashMap = {{34239, "Sarasota"}};

	//#1
	unordered_map<int, string>::const_iterator found = myHashMap.find(34239);
	if (found == myHashMap.end())
		cout << "Not found.";
	else
		cout << "Found " << found->second << " for the key " << found->first << ".\n";
	
	//#2
	myHashMap[78204] = "San Antonio";
	myHashMap[22209] = "Arlington";

	//#3 and #4
	for(auto x: myHashMap)
		cout << x.first << " " << x.second << endl;

	return 0;

}