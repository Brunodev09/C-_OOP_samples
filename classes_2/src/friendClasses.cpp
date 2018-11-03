#include <iostream>
#include "friendClasses.h"

using namespace std;


void B::setSecretValue(A &obj, int value) {
	obj.secretValue = value;
}
