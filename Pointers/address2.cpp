#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter the value of integer" << endl;
    cin >> i;
    int *p = &i;
    cout << "The address of integer " << i << " is ";
    cout << p << endl;
    return 0;
}