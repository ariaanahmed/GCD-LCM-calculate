#include <iostream>
using namespace std;
int main() {
    
    int num1, num2;
    cout<< "Enter 1st number: ";
    cin >> num1;
    cout<< "Enter 2nd number: ";
    cin >> num2;
    
    int n1 = num1, n2 = num2, rem;

    while (n2 != 0) {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    int gcd = n1;
    int lcm = (num1 * num2) / gcd;

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;
    return 0;
}
