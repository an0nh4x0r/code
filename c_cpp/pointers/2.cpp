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

	// After stackoverflow question
	// http://stackoverflow.com/questions/39055671/pointers-sizeof-and-address-in-c
	// trying new p + sizeof(1) and p + sizeof(2)

	cout << "The value of p + sizeof(1): " << p + sizeof(1) << endl;
	cout << "The value of p + sizeof(2): " << p + sizeof(2) << endl;
	cout << "The value of p + sizeof(0): " << p + sizeof(0) << endl;

	// Lets do something more funny
	int a1 = 0, b1 = 1, c1 = 2;
	cout << "The address of a1 is: " << &a1 << endl;
	cout << "The value of p + a1 is: " << p + a1 << endl;
	cout << "The address of b1 is: " << &b1 << endl;
	cout << "The value of p + b1 is: " << p + b1 << endl;
	cout << "The address of c1 is: " << &c1 << endl;
	cout << "The value of p + c1 is: " << p + c1 << endl;
	return 0;

	// Not much clear! will update this in future
}