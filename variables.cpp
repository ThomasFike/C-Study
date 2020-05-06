#include <iostream>

using namespace std;

int main() {
    string characterName = "Bill";
    int characterAge = 85;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    characterName = "Bob";
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;
}