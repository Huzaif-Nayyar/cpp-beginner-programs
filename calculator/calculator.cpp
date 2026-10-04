#include <iostream>
using namespace std;
int main() {
int num1, num2, choice;
cout << "Enter first integer: ";
cin >> num1;
cout << "Enter second integer: ";
cin >> num2;
cout << "\n-- Calculator Menu--" << endl;
cout << "Press 1 for addition" << endl;
cout << "Press 2 for subtraction" << endl;
cout << "Press 3 for multiplication" << endl;
cout << "Press 4 for division" << endl;
cout << "Press 5 for finding the remainder" << endl;
cout << "\nEnter your choice (1-5): ";
cin >> choice;
switch(choice) {
case 1:
cout << "Result: " << num1 + num2 << endl;
break;
case 2:
cout << "Result: " << num1- num2 << endl;
break;
case 3:
cout << "Result: " << num1 * num2 << endl;
break;
case 4:
if(num2 != 0) {
cout << "Result: " << (float)num1 / num2 << endl;
} else {
cout << "Error! Division by zero is not allowed." << endl;
}
break;
case 5:
if(num2 != 0) {
cout << "Result: " << num1 % num2 << endl;
} else {
cout << "Error! Division by zero is not allowed." << endl;
}
break;
default:
cout << "Invalid choice! Please press between 1 to 5." << endl;
}
return 0;
}
