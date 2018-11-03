//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string something(int); //in function declaration you don't need to specify the var, only its type
int changeValue(int);

int power (int, int);
int power(double, int); //This is called overloading functions. Same name, different paramaters

int a;

int main() {
	int b,e;
	int array [4];
	int biArray [4][4];
	int d2Array[4][4] = {0};//This sets every value of the array to zero. 4 rows with 4 columns
	string algo, algo2;
	cout << "Enter a: " << endl;
	cin >> a;


/*	cout << "Enter b: " << endl;
	cin >> b;*/
/*	if (a < b)
		cout << "A is smaller than B." << endl;
	else if (a > b)
		cout << "A is bigger than B." << endl;
	else
		cout << "A is equal to B" << endl;*/

/*
	switch(a) {
		case 0: cout << "This is a fucking zero!" << endl;
		break; //Without break when switch() finds the match it will execute everything below the true statement
		case 25: cout << "This is a fucking 25!" << endl;
		break;
		default: cout << "Pretty much an else" << endl;
	} // continue - it will not execute any code below it but also wont exit the loop or function
*/
	cout << "The address on the memory of a is: " << &a << endl;
	cout << something(a) << endl;

	a = changeValue(a);
	cout << endl << a << endl;

	//Buffer -> temporary array that is stored in cin and it will always be cleared

	system("cls");
	cout << "Please enter the base and exp of the number" << endl;
	cin >> b;
	cin >> e;
	cout << power(b,e);
	return 0;

}

string something(int x) {
	if (x == 1) return "one";
	else return "this is not one";

}

int changeValue(int x) {
	return x*2;
}

int power(int b, int e) {
	int aux = b;
	while (e-- > 1) {
		b = b*aux; //e is being decreased after condition checking
	}
	return b;
}

int power(double b, int e) {
	double aux = b;
	while (e-- > 1) {
		b = b*aux;
	} return b;
}
