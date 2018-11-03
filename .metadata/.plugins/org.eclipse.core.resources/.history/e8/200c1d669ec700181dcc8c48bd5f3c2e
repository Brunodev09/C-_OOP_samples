/*
 * files_3.cpp
 *
 *  Created on: Oct 3, 2018
 *      Author: bruno
 */


#include <iostream>
#include <fstream>

using namespace std;

int main() {
	/*getline(bufferStorage, bytes per line, '\n') Can use any character as a limiter on the third argument - Deletes limiter
	 * get(bufferStorage, bytes, '\n') Does not delete limiter
	 * ignore(how_many_chars_to_get and IGNORE, limiter)
	 *
	 * */

	fstream file;
	file.open("data.txt", ios::out | ios::in | ios::binary);

	if(file.is_open()) {
		char buffer[50]; //could use normal array, which is also a pointer
		//char *buffer = new char[50];//dynamic array of chars
		streampos size = file.tellg();
		cout << size;
		int lines;
		char first, second;

		do{
			first = file.get(); //Only gets 1 char
			file.ignore(40,' ');//Ignores up to 40 bytes until it meets a space
			second = file.get();
			file.ignore(40, '\n');
			cout << first << " " << second << endl;
		}while(!file.eof());



/*		while(file.getline(buffer, 50)) {
			lines++;
		}cout << lines << endl*/;

	} else cout << "Error!";


	return 0;
}



