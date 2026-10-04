#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1; 
    cout << "Enter a positive integer : ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl ;
    }
    else
    {
        int i = n ; 

       
        while (i > 1) 
        {
            factorial *= i; 
            i--  ;           
        }    
        cout << "Factorial of " << n << " (" << n << "!) = " << factorial << endl;
    }
    return 0;
}
