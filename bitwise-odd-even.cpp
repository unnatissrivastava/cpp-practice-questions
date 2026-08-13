#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter a number: ";
    cin >>a;
    if (a & 1)
        cout << "odd";
    else
        cout << "even";
    return 0;
}
