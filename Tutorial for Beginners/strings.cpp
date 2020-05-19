#include <iostream>

using namespace std;

int main() {
    string phrase = "Giraffe Academy";
    cout << phrase << endl;
    cout << phrase.length() << endl;
    
    cout << phrase[0] << endl; //First Char
    cout << phrase[phrase.length() - 1] << endl; //Last Char
    
    phrase[0] = 'B'; //Set Single Char
    cout << phrase << endl;
    phrase[0] = 'B'; //Undo above

    cout << phrase.find("Academy", 0) << endl; //find(searchTerm, startIndex)

    cout << phrase.substr(8, 3) << endl; //substr(startIndex, numberOfCharsToGrab)
}