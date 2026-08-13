#include <iostream>
using namespace std;

int main() {
    int a, digit, reverse = 0, number;

    cout << "enter a number";
    cin >> a;

    number = a;

    while (number > 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    cout << "Reverse: " << reverse;

    return 0;
}
