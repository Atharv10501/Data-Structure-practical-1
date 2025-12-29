#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = a + b;
    int difference = a - b;

    cout << "Addition = " << sum << endl;
    cout << "Subtraction = " << difference << endl;

    return 0;
}
