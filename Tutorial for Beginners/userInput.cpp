#include <iostream>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Name: ";
    getline(cin, name); //String

    cout << "Enter your age: ";
    cin >> age; //Numbers and char
    
    cout << name << " is " << age << " years old." << endl;
}