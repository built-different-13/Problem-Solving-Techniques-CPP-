#include <iostream>
using namespace std;

int main() {
    int a[10];
    cout << "The address of array a is printed below" << endl;
    cout << a << endl;
    cout << &a[0] << endl;
    return 0;
}