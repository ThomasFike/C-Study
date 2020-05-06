#include <iostream>

using namespace std;

void sayHi(string name);
string getName();

int main() {
    string name = getName();
    sayHi(name);
    return 0;
}

void sayHi(string name) {
    cout << "Hello " << name << endl;
}

string getName() {
    string name;
    cout << "Name: ";
    getline(cin, name);
    return name;
}