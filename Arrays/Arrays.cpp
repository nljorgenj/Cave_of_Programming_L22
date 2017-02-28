#include <iostream>

using namespace std;

int main() {

	cout << "Arrays of integers." << endl;
	cout << "===================" << endl;

	int values[3];

	values[0] = 88;
	//values[1] = 123;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;


	cout << endl << "Arrays of doubles." << endl;
	cout << "===================" << endl;

	double numbers[4] = {4.5, 2.3, 8.1, 7.2};

	for (int i = 0; i < 4; i++) {
		cout << "element at index " << i << ": " << numbers[i] << endl;
	}


	return 0;
}
