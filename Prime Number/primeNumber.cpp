#include <iostream>
using namespace std;
int main() {
    int input;
    cout << "Enter a positive nubmer: ";
    cin >> input;

    int count = 0;
    // every number is divisible by 1, so start from 2. i < input means i < input - 1
    for(int i = 2; i < input; i++) {
        if(input % i == 0) {
            count++;
            break;
        }
    }
    if(count == 0) {
        cout << "PRIME NUMBER";
    } else{
        cout << "NOT PRIME NUMBER";
    }
    return 0;
}