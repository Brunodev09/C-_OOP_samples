#include <iostream>

using namespace std;

int main() {
	int a = 5;
	int &b = a;

	int *p = &a;  //This * is only for declaration of a pointer. And will store 0x00...
	//Pointers can actually store the address in ITS VALUE.
	//Reference variables are variables with the same value as the refereced but referenced at the same place in memory.

	cout << a << " " << p << endl;


	cout << p << endl; //This is the pointer holding the value of a memory address.
	cout << *p << endl; //This * is to point to the value of the variable that has p address. And p has a's address.
	cout << *&a << endl; //This * is to point to the value of the variable that has a address

	*p = 10;
	cout << a << endl; //Here a's value got changed by the pointer

	const int * pointer = &a;//Cannot change the value but can change the address. Because const is reffering to int not to *
	int * const pointer_2 = &a; //Can change the value, but not the address
	const int * const pointer_3 = &a;//Cannot change the value nor the address

	int ** pointer_pointing_address_of_pointer = &p; //Only way to get pointers address

	cout << endl << pointer_pointing_address_of_pointer << endl;
	return 0;
}
