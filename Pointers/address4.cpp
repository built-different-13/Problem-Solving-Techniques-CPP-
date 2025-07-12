#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter the integer value" << endl;
    cin >> i;
    int *p = &i;
    cout << "The address of integer " << i << " is ";
    cout << p << endl;
    p++;
    cout << "The updated address of integer is" << " ";
    cout << p << endl;
    return 0;
}