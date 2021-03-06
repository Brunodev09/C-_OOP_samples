#include <iostream>
#include <array>
using namespace std;


void multiply(int &, int);
int sum(int *, int);
int *sum2(int *);
void multiplyArray(int *, int, int);

int main() {
	int a = 2;
	int b = 1;
	int c = 99;

	multiply(a,2);
//	sum(&b,100);
	int totalSum = sum(&b,100);
	int *p = sum2(&c);

	cout << a << endl;//using reference
	cout << b << endl;//using pointers

	cout << p << endl;//showing the pointer
	cout << *p << endl;//showing the value


	//The vantage of pointers is being able to pass an array to outside functions, while with ref you cannot
	//Also array[0]==array. They are the same pointer
	int array[10];
	int length = sizeof(array)/sizeof(array[0]);
	//sizeof() will return the bytes length. (bytes length)/amout of bytes = array.length.
	//eg: int a[10] int = 4bytes. amount of bytes 4*10 = 40. Array length = 40/4= 10;
	//empty array will have the size of its type. In this case int size.

	for (int i = 0; i < length; i++)array[i] = i;

	multiplyArray(array, 5, length);

	for (int i = 0; i < length; i++) {
		 cout << array[i] << endl;
	}



	return 0;
}

void multiply(int &x, int m) {
	x = x*m;
}

int sum(int *x, int s) {
	return *x += s; //value of x + sum
}

int *sum2(int *pointer) {
	return pointer;//returning the pointer
}

void multiplyArray(int *array, int num, int index) {
	for (int i = 0; i < index; i++) {
		array[i] = array[i] * num;
	}
}
