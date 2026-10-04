#include <iostream>
#include <string>
#include <cctype>
using namesspace std ;

int main() {
    string input;
    int sum = 0;

    
    cout << "Enter a positive integer: ";
    cin >> input;


    bool isValid = true;
    for (char const &ch : input) {
        if (!std::isdigit(ch)) {
            isValid = false;
            break;
        }
    }

    if (!isValid || input.empty()) {
        cout << "Error: Invalid input. Please enter a positive integer." <<endl;
        return 1;
    }

    
    cout << "The individual digits are: ";
    for (size_t i = 0; i < input.length(); ++i) {
        cout << input[i];
        

        if (i < input.length() - 1) {
            cout << " ";
        }


        sum += input[i] - '0';
    }
    cout << endl;

    
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
