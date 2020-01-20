/*
Array in C++
I've used allocation, access, and insertion.
Deletion or search aren't used here but it would take O(n) time.
All time complexities are amortized. 
*/

#include <iostream>

using namespace std;

int main(){

	int i;
	//Can declare size or not
	//string cars[] = {"Ford", "Volvo", "BMW"};
	//The space complexity is O(n)
	string cars[4] = {"Ford", "Volvo", "BMW"};

	//Access takes O(1) time
	string car1 = cars[0];
	cout << car1 << ".\n";

	//Insertion takes O(1) time in this case but would normally take O(n) for a specific value in an array
	cars[3] = "Hyundai";

	//Iterate forwards
	//Can't use cars.length()
	//Could also use i < 4
	for(i = 0; i <= 3; i++){
		cout << cars[i] << ".\n";
	}

	//Iterate backwards
	for(i = 3; i >= 0; i--){
		cout << cars[i] << ".\n";
	}

	return 0;
}
