#include <iostream>
using namespace std;
int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    int i = 0;
    do
    {
        cout << i << " Bangladesh" << endl;
        i++;
    } while (i <= input);
    
    return 0;
}
