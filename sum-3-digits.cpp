#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a 3-digit number: ";
    cin >> a;

    int f  = a / 100;          
    int s = (a / 10) % 10;    
    int t  = a % 10;           
    int sum = f + s + t;

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
