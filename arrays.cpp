/*
	Array in C++
*/

#include <iostream>

using namespace std;

int main(){

	int i;
	//Can declare size or not
	string cars[4] = {"Ford", "Volvo", "BMW"};
	//string cars[] = {"Ford", "Volvo", "BMW"};

	string car1 = cars[0];
	cout << car1 << ".\n";

	//Add
	cars[3] = "Hyundai";

	//Remove?

	//Iterate forwards
	//Can't use cars.length()
	//Could use i < 4
	for(i = 0; i <= 3; i++){
		cout << cars[i] << ".\n";
	}

	//Iterate backwards
	for(i = 3; i >= 0; i--){
		cout << cars[i] << ".\n";
	}

	return 0;
}
