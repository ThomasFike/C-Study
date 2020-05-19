#include <iostream>

using namespace std;

int main() {
    int luckyNums[20] = {0,1,2,3,4};
    luckyNums[5] = 19;
    for (int i = 0; i < 6; i++){
        cout << luckyNums[i] << endl;
    }
    
    return 0;
}