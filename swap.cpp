#include <iostream>
using namespace std;
int main()
{
    int a, temp, b;
    cout<< "enter a number";
    cin>> a;
    cout <<"enter another number";
    cin>> b;
    temp = a;
    a = b;
    b = temp;
    cout<<"numbers are: "<<a<<b;
    return 0;
}
