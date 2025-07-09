#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter the value of integer" << endl;
    cin >> i;
    cout << "The address of integer " << i << " is ";
    cout << &i << endl;
    return 0; 
}