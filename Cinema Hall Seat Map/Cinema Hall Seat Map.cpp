#include <iostream>
using namespace std;

int main() {
    int rows, seatsPerRow;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of seats per row: ";
    cin >> seatsPerRow;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= seatsPerRow; j++) {
            cout << "R" << i << "S" << j << " ";
        }
        cout << endl;
    }

    int total = rows * seatsPerRow;
    cout << "Total seats = " << total << endl;

    return 0;
}
