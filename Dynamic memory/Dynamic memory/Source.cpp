#include <iostream>

using namespace std;

int main() {

	cout << "Dynamic Memory\n" << endl;

	int* newIntPtr = new int;

	*newIntPtr = 8;

	cout << "The value of my new interger is: " << *newIntPtr << endl;

	// When dealing with Dynamic memory make sure to delete the pointer or else it will remain in till its deleted
	delete newIntPtr;

	return 0;
}