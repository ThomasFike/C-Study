#include <iostream>
using namespace std;

int main() {
    bool isMale = true;
    bool isTall = false;

    if (isMale && isTall) {
        cout << "You are a male and tall" << endl;
    } else if (isMale && !isTall) {
        cout << "You are male but not tall" << endl;
    } else {
        cout << "You are not a male" << endl;
    }
}