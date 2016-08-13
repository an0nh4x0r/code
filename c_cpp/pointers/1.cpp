// This is sample program on pointers
// This includes some introductory concepts related to pointers
#include <iostream>

using namespace std;

int main() {
	// First i'm gonna make a integer variable
	
	int a;
	
	// Now i'm gonna make a pointer to integer variable
	// Declaring int and putting asterisk(*) infront of variable
	// name makes it pointer to integer variable
	
	int *p;
	
	// Now i'm gonna assign the address of variable a to variable p
	// We Use & sign to get address of a variable (example &a gives starting address of a)
	// and for storing the address we just gonna assign it to p

	p = &a;

	// Now we assigned address of variable a to pointer to integer variable p
	// There is a difference between p and *p
	// p simply means address
	// while *p means value at the address
	// We are storing here the address of a in p, that's why p = &a and not *p = &a
	// because *p is the value at the address and we wanna store the address
	// That's why we have taken p = &a

	// Now lets do assignment operation on variable a and give it a value

	a = 5;

	// Now lets print various values to the console to clear the concepts!

	cout << "value of variable a = " << a << endl;
	cout << "Since *p is value at the address and we have the assigned p the address of variable a so = " << *p << endl;
	cout << "*p is also called dereferencing" << endl;
	cout << "We can change the value of variable a just by using a assignment operation of *p, like *p = 10" << endl;
	cout << "After that if we print out the value of a, it will be equal to 10 and not 5" << endl;
	cout << "So i'm gonna assign *p = 10 and let's see what happens practically" << endl;
	*p = 10;
	cout << "value of variable a = " << a << endl;
	cout << "Since *p is value at the address and we have the assigned p the address of variable a so *p = " << *p << endl;

	// Now lets print the address of the variable using a and p

	cout << "The address of a is &a = " << &a << endl;
	cout << "The other way to determine address of variable a is: p = " << p << endl;

	// Now let print the address of pointer to integer variable p
	// Obviously that's &p, putting & infront of any variable gives it's address

	cout << "So the address of pointer to integer variable p is &p = " << &p << endl;

	return 0;
}