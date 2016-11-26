#include <iostream>
using namespace std;

void main() {

	//Loops are used to repeat statements multiple times, by only having to type the statements once.

	cout << "Hello ";
	cout << "Hello ";
	cout << "Hello ";
	cout << "Hello ";
	cout << "Hello ";
	cout << endl;

	//---- FOR LOOPS ----

	//The most common type of loop is the FOR LOOP. It is used to execute statements a finite number of times.
	for (int i = 0; i < 5; i++) {
		cout << "Hello ";
	}//end for
	cout << endl;

	//Note that the loop does exactly the same thing as the 5 lines of code above, but only with 1 statement.
	//Imagine having 1 Million lines of text to print. Using a loop would make things much easier instead of typing code to print each line.

	//The FOR loop has a structure:
	//(int i = 0;... initializes a variable which is used as a counter/iterator. Each time the loop ITERATES, it increases (or decreases) this variable to keep track of its progress.
	//...i < 5;... is the condition of the loop. As long as this condition is true, the loops keep running. When the condition reaches a false state, the loop stops.
	//...i++;)... increments the counter variable by a value (in this case 1), so that the loop can keep track of its progress.

	/*In the loop above, the statement is executed as following:
	
	|	Value of i	|		i < 5		|		Result						|
			0			0 < 5 (=True)		print Hello			i++
			1			1 < 5 (=True)		print Hello			i++
			2			2 < 5 (=True)		print Hello			i++
			3			3 < 5 (=True)		print Hello			i++
			4			4 < 5 (=True)		print Hello			i++
			5			5 < 5 (=False)		(Do nothing)		Loop Stops

	*/

	//Another example:
	for (int counter = 20; counter > 10; counter-=2) {
		cout << "Hello ";
	}//end for

	cout << endl;

	/*In this loop, the statement is executed as following:

	|Value of counter|	counter > 10		|		Result						|
			20			20 > 10 (=True)			print LOOP			i-=2
			18			18 > 10 (=True)			print LOOP			i-=2
			16			16 > 10 (=True)			print LOOP			i-=2
			14			14 > 10 (=True)			print LOOP			i-=2
			12			12 > 10 (=True)			print LOOP			i-=2
			10			10 > 10 (=False)		(Do nothing)		Loop Stops

	*/

	//As you can notice from the output, both loops produce exactly the same output, but with difference parameters. The input parameters depend on what you want to do.
	//For example, here is a for loop that prints all even numbers from 0 to 10.
	for (int i = 0; i <= 10; i += 2) cout << i << " ";
	cout << endl;

	//Or a loop that prints all odd numbers backwards from 9 to 1.
	for (int i = 9; i >= 0; i -= 2) cout << i << " ";
	cout << endl;

	//---- WHILE LOOPS ----
	//While loops are used to execute a statement an infinite amount of times, until their condition becomes true.
	int x = 0;
	while (x < 5) {
		x++;
		cout << x << " ";
	}//end while
	cout << endl;
	//The loop above increments x until it reaches the value 5, much like a for loop.

	//However, the following loop runs infinitely, until the user enters the number 0:
	int num = -1;
	while (num != 0) {
		cout << "Enter number (while): ";
		cin >> num;
	}//end while

	//---- DO-WHILE LOOPS (REPEAT) ----
	//Do while loops are inverted while loops, where statement is executed first and the check is done after execution.
	//Therefore do-while loops are executed at least once.
	int num2;
	do {
		cout << "Enter number (do-while): ";
		cin >> num2;
	} while (num2 != 0);
	//This do-while loop does exactly the same thing with the while loop.
	//However, note that the num2 variable does not have to be initialized, since the condition is checked AFTER the user enters a value.

	
	//---- BREAK STATEMENTS ----
	//You can use break; to stop a loop, before the condition has been met. For example, we can stop this infinite loop by using break:
	for (int i = 0; true; i++) {
		if (i > 10) break;
		cout << i << " ";
	}//end for

	cout << endl;

	//---- CONTINUE STATEMENTS ----
	//You can use continue to skip a step of a loop.
	for (int i = 0; i <= 10; i++) {
		if (i == 5) continue;
		else cout << i << " ";
	}//end for

	//Note that in this loop, the number 5 is not printed.

	cout << endl;

	//---- GOTO STATEMENTS ----
	int count = 0;
label: 
	if (count != 5) {
		cout << "FALSE ";
		count++;
		goto label;
	}
	else {
		cout << "TRUE ";
	}//end else

	//GOTO moves execution to the given marker/label, causing a loop in this case. You can use this to get out of deeply nested routines.

	cout << endl;


	// USEFUL NOTE:

	// For loops are used for a finite (limited) amount of repetitions, such as accessing array elements.
	// While loops are used for an indefinite (unlimited) amount of repetitions, such as reading input from a text file which has an unknown number of lines.
	// Do While loops are also used for an indefinite amoutn of repetitions, however they are always executed first (at least once) and then the condition is checked. This makes them ideal for validating user input.
	// Break is used to stop execution of a single loop.
	// Continue is used to skip a step of a loop.
	// GoTo is used to skip execution of multiple nested routines, or to create an informal loop.

	system("pause");
}//end main()