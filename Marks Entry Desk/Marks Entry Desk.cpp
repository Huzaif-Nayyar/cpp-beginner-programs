#include <iostream>
using namespace std;

int main() {
    int numStudents, numSubjects;

    cout << "Enter number of students: ";
    cin >> numStudents;

    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    int topperStudent = 0;
    double highestAverage = -1.0;

    for (int i = 1; i <= numStudents; ++i) {
        cout << "\nStudent " << i << "\n";
        double total = 0.0; 
        
        for (int j = 1; j <= numSubjects; ++j) {
            double marks;
            cout << "Subject " << j << " marks: ";
            cin >> marks;
            total += marks;
        }

        double average = total / numSubjects;

        cout << "Total = " << total << ", Average = " << average << "\n";

       
        if (average > highestAverage) {
            highestAverage = average;
            topperStudent = i;
        }
    }

    cout << "\nTopper: Student " << topperStudent << " (Average " << highestAverage << ")\n";

    return 0;
}
