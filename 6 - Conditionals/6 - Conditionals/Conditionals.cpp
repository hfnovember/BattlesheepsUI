#include <iostream>
using namespace std;

void main() {

	//Conditionals (IF...ELSE IF...ELSE / SWITCH CASE) can be used to determine if a condition is true or false.
	//When the condition is true, the code following the condition is executed.

	int a = 6;

	//You can check if a variable is equal to a value using ==:
	if (a == 6) cout << "a is equal to 6" << endl; //The condition is true, so the code is executed and the output is printed
	if (a == 7) cout << "a is equal to 7" << endl; //The condition is false, so the code is NOT executed and the output is not printed

	int b = 6;
	if (a == b) cout << "a is equal to b" << endl; //The condition is true (both a and b are = 6) so the code is executed.

	//You can use != to check if a variable is NOT equal to a value:
	if (a != 2) cout << "a is NOT equal to 2" << endl; //The condition is true (a is not = 2) so the code is executed.
	if (a != b) cout << "a is not equal to b" << endl; //The condition is false (a IS equal to b) so the code is NOT executed.

	//Else If is used to check for multiple conditions:
	if (a == 3) cout << "a is equal to 3" << endl; //The condition is false so the code is not executed.
	else if (a != 3) cout << "a is NOT equal to 3" << endl; //The condition is true so the code is excecuted.

	//Else can also be used to execute a piece of code if ALL the above conditions are false
	if (a == 3) cout << "a is equal to 3" << endl; //Condition is false
	else if (a == 4) cout << "a is equal to 4" << endl; //Condition is false
	else cout << "a is not equal to 3 or 4" << endl; //All above conditions are false, so else is executed.

	//Examples with other data types:
	double myDouble = 5.8;
	string myString = "abc";
	bool myBoolean = true;

	if (myDouble == 5.4) cout << "myDouble is 5.4" << endl;
	else cout << "myDouble is not 5.4" << endl;

	if (myString == "abc") cout << "myString is abc" << endl;
	else cout << "myString is not abc" << endl;

	if (myBoolean) cout << "myBoolean is true" << endl; //Alternatively, you can use (myBoolean == true)
	else if (!myBoolean) cout << "myBoolean is false" << endl; //Alternatively you can use (myBoolean == false) or (myBoolean != true)

	cout << endl;

	//You can compare if a number is larger, larger or equal, smaller or smaller or equal to another number using:
	if (a > 3) cout << "a is bigger than 3" << endl; //True
	else cout << "a is not bigger than 3" << endl; //Not executed

	if (a > 6) cout << "a is bigger than 6" << endl; //False
	else cout << "a is not bigger than 6" << endl; //Executed

	if (a >= 6) cout << "a is bigger than or equal to 6" << endl; //True
	else cout << "a is not bigger than or equal to 6" << endl; //Not executed

	if (a > b) cout << "a is bigger than b" << endl; //False
	else cout << "a is not bigger than b" << endl; //Executed
	
	if (a > 10) cout << "a is bigger than 10" << endl; //False
	else if (a > 8) cout << "a is bigger than 8" << endl; //False
	else if (a > 6) cout << "a is bigger than 6" << endl; //False
	else if (a > 4) cout << "a is bigger than 4" << endl; //True - executed
	else cout << "a is smaller or equal to 4" << endl; //False - not executed

	cout << endl;

	//You can execute multiple statements when a condition is true, using curly braces:
	if (a == 6) {
		cout << "a is equal to 6" << endl;
		a++;
	}//end if
	else {
		cout << "a is not equal to 6" << endl;
		a--;
	}//end else

	a = 6; //Reset a to 6
	cout << endl;

	//You can nest if statements into if statements
	if (a < 10) {
		cout << "a is less than 10" << endl;
		if (a < 8) {
			cout << "a is less than 8" << endl;
			if (a < 6) {
				cout << "a is less than 6" << endl;
			}//end if < 6
			else {
				cout << "a is not less than 6" << endl;
			}//end if not < 6
		}//end if < 8
		else {
			cout << "a is not less than 8" << endl;
		}//end if not < 8
	}//end if < 10
	else {
		cout << "a is not less than 10" << endl;
	}//end if not < 10

	cout << endl;

	//You can combine conditions using && (AND) or || (OR):
	//AND will return true if ALL the conditions are true
	//OR will return true if just ONE of the conditions is true.

	if (a < 10 && a > 4) cout << "a is less than 10 and more than 4" << endl; //Both a > 10 and a > 4 are true - executed
	if (a > 10 && a > 4) cout << "a is more than 10 and more than 4" << endl; //a > 10 is false, a > 4 is true - Not executed
	if (a > 10 || a > 4) cout << "a is more than 10 or more than 4" << endl; //One of the conditions is true (a>4) - Executed
	
	//You can combine all these conditionals as you like:
	bool isAnEvenNumber;
	if (a % 2 == 0) isAnEvenNumber = true;
	else isAnEvenNumber = false;
	if (isAnEvenNumber && a > 3) {
		cout << "a is an even number, more than 3 ";
		if (a + 5 == 11) cout << "and if you add 5 to it, you get 11." << endl;
	}//end if isAnEvenNumber and >3

	system("pause");
	system("cls"); //This command is used to clear the screen

	//--- SWITCH ---
	//Switch-Case statements can be used to perform actions when a specific variable has a specific value.
	int number;
	cout << "Enter a number (1-3): ";
	cin >> number;
	//Switch-case statement:
	switch (number) {
	case 1:
		cout << "Gold!" << endl;
		break; //You need to use break after each case.
	case 2:
		cout << "Silver!" << endl;
		break;
	case 3:
		cout << "Bronze!" << endl;
		break; 
	default: //The default case acts as an else. If none of the above cases are true, the default case is executed.
		cout << "No Medal!" << endl;
		break;
	}//end switch

	//Switch-Cases are frequently used to validate user input.

	system("pause");

}//end main()