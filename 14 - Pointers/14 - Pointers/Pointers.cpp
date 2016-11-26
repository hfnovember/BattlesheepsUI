#include <iostream>
using namespace std;

void main() {

	//As you should already know, every variable is stored at a memory location. Every location has its own address and value of the variable stored.
	//A pointer is used to directly get the memory address of a variable. Essentially pointers are variables who's value is the address of another variable.
	//They are therefore called pointers, because they "point" to another variable. 
	//Each pointer has its own type, for example an integer pointer will point to an integer variable's address etc...
	//Pointers have many useful uses which will be explained in the following chapters.

	//You can get the memory ADDRESS of a variable using the & (ADDRESS-OF) operator:
	int var = 4;
	cout << "Address of 'var': " << &var << endl;
	//Note that a memory address has an 8 byte length and is stored in hexadecimal form.
	//Getting the address of a variable is also called a REFERENCE.

	//You can declare a pointer variable to store that address using the * symbol after the type:
	int* pointer = &var; //This creates a pointer to integer variable, which then stores the address of var.
	cout << "Value of 'pointer': " << pointer << endl;
	//Note that printing 'pointer' will also print the same result, but now the result is stored in a variable.

	//You can also get the value of a specific varible if you know its specific memory address. For example, we already know the memory address of 'var' since we have a pointer to it.
	//Therefore we can get its value using the * (VALUE-OF) operator in front of the pointer's name:
	cout << "Value of 'var' using 'pointer': " << *pointer << endl;

	//Furthermore, you can have a pointer to a pointer and so on using:
	int** pointerToPointer = &pointer;
	cout << "Address of 'pointerToPointer: " << pointerToPointer << endl;
	//The value of the pointerToPointer will be the address of the pointer its pointing to:
	cout << "Value of pointerToPointer: " << *pointerToPointer << endl;

	//Pointers are using for creating dynamic data structures (that change during runtime), dynamic memory allocation, etc...

	system("pause");
}//end main()