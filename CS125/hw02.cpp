#include <iostream>

using namespace std;

int main() {
    int numberOfNumbers = 0;
    int numberPositive = 0;
    int numberNegative = 0;
    int sum = 0;
    int workingNumber = 0;

    cout << "Enter an integer (or q to quit): ";
    while (cin >> workingNumber) {
        numberOfNumbers++;
        // Check for Positive
        if (workingNumber > 0)
            numberPositive++;
        // Check for negative
        if (workingNumber < 0)
            numberNegative++;
        // Add to sum
        sum += workingNumber;
        // Reprint Prompt
        cout << "Enter an integer (or q to quit): ";
    }
    // Print stats
    cout << "You entered " << numberOfNumbers << " integers" << endl;
    cout << numberPositive << " of the integers were positive." << endl;
    cout << numberNegative << " of the integers were negative." << endl;
    cout << "The sum of the " << numberOfNumbers << " integers was " << sum
         << "." << endl;
}