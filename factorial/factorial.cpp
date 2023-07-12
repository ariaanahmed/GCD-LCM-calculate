#include <iostream>
using namespace std;
int main() {

    int input, factorial = 1;
    cout << "Enter any positive number: ";
    cin >> input;

    if(input < 0) {
        cout << "Invalid, Enter a positive number!!";
    } else if(input == 0 || input == 1) {
    cout << "Your factorial is:" << "1";
    } else {
        for(int i = 1; i <= input; i++) {
        factorial = factorial * i;
    }
    cout << "Your factorial is:" << factorial;
    }
    return 0;
}