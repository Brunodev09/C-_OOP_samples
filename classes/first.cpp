#include <iostream>
#include "class.h"
using namespace std;

void dynamic();

//Its good practice to keep classes objects private, and use public functions to alter them
int main() {
//	Person person(2); //calling overloaded constructor
	Person person; //calling default constructor

	cout << person.getAge() << endl;
	person.setAge(21);
	cout << person.getAge() << endl;
	return 0;
}

void dynamic() {
	Person *pointer = new Person[5];

	delete [] pointer;

	//In this case destructor will not be evoked unless we free the memory, since we are using outside the class!
}
