#include <iostream>

using namespace std;

char getOpperation();
double getNumber(int numberToGet);
double computeResult(char opperation, double num1, double num2);

int main() {
    double num1, num2;
    char opperation;
    double result;

    num1 = getNumber(1);
    opperation = getOpperation();
    num2 = getNumber(2);

    result = computeResult(opperation, num1, num2);
    cout << "Computing " << num1 << opperation << num2 << endl;
    cout << "Result: " << result << endl;
    return 0;
}

char getOpperation() {
    char operation;
    cout << "Operation (+,-,*,/): ";
    cin >> operation;
    return operation;
}

double getNumber(int numberToGet) {
    double num;
    cout << "Enter number " << numberToGet << ": ";
    cin >> num;
    return num;
}

double computeResult(char opperation, double num1, double num2) {
    double result;
    if (opperation == '+')
        return num1 + num2;
    else if (opperation == '-')
        return num1 + num2;
    else if (opperation == '*')
        return num1 * num2;
    else if(opperation == '/')
        return num1 / num2;
    else
        cout << "Invalid Operation";
    return 0;
}