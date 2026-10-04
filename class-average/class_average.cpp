#include <iostream>
using namespace std ;
int main ()

{
    int tStudents;
    int count = 0;
    double mark;
    double sum = 0.0;
    double average;

    
    cout << "Enter the total number of students in the class: " ;
    cin >> tStudents ;

    
    if (tStudents <= 0) {
        cout << "Invalid number of students." << endl ;
        return 0 ;
    }

    while (count < tStudents)
      {
        cout << "Enter marks for student " << (count + 1) << ": " ;
        cin >> mark ;

        sum += mark ; 
        count++  ;            
    }

    average = sum / tStudents ;

    cout << "\nThe class average is: " << average << endl ;

    return 0 ;
}
