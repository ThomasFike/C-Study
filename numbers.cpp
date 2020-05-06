#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /* Math Operations
     * + | Add
     * - | Subtract
     * * | Multiply
     * / | Divide
     * % | Modulo
     */
    //C++ follows PEMDAS

    int wnum = 5;
    double dnum = 5.5;

    cout << (4 + 5) * 10 << endl;

    //Incrementing and Decrement Numbers
    wnum++;
    wnum--;
    wnum += 80; //Adds 80 to wnum

    //Working with ints and floats together
    cout << 5.5 + 9 << endl;

    //Stuff from cmath
    //Must include cmath
    cout << pow(2, 5) << endl; //2^5
    cout << sqrt(36) << endl;
    cout << round(4.5) << endl;
    cout << ceil(4.1) << endl; //Always round up
    cout << floor(4.8) << endl; //Always round down
    cout << fmax(3, 10) << endl; //Returns the larger of the two
    

}