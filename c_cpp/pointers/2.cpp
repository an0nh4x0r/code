// Pointer Airthmetic is done in this program
// This has concepts related to the sizeof() function in cpp
// Also we'll see some concepts of addition of integer variable to pointer variables
#include <iostream>

using namespace std;

int main() {
	// sizeof function in c/cpp gives the size of variable
	// for int its 4 in g++ compiler

	cout << sizeof(int) << endl;

	// Now we'll do some pointer arithmetic here
	// lets first declare a pointer to integer variable and then try adding a integer in it.
	int *p;
	int a = 5;
	p = &a;
	cout << "The value of p is: " << p << endl;
	cout << "The value of p + integer is: " << p + 0 << endl;
	cout << "Note the difference between value of pointer and (pointer + integer)" << endl;
	// Note here when we add 1 to pointer variable address increments by 4
	// when we add 2 to pointer variable address increments by 8
	// when we add 0 to the pointer variable address increments by none. It remains the same.
	// lets take the size of individual 1, 2, 3
	cout << "The sizeof(0) is: " << sizeof(0) << endl;
	cout << "The sizeof(1) is: " << sizeof(1) << endl;
	cout << "The sizeof(2) is: " << sizeof(2) << endl;

	// But the answer in all three above cases is 4 bytes! :( WTF man
	// Lets do some testing here

	cout << "The value of p + 0 is: " << p + 0 << endl;
	cout << "The value of p + 1 is: " << p + 1 << endl;
	cout << "The value of p + 2 is: " << p + 2 << endl;

	// Conclusion here is that size of any integer variable u=is 4 bytes
	// but when we add a integer to a pointer variable it's multiple of that integer with 4 added to the address

	// Lets check out the subtraction operation

	cout << "The value of p - 0 is: " << p - 0 << endl;
	cout << "The value of p - 1 is: " << p - 1 << endl;
	cout << "The value of p - 2 is: " << p - 2 << endl;
	return 0;
}