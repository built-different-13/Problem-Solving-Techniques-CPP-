#include <iostream>
using namespace std;

int main() {
    double d;
    cout << "Enter the double value" << endl;
    cin >> d;
    cout << "The address of double " << d << " is ";
    double *dp = &d;
    cout << dp << endl;
    dp++;
    cout << "The updated address of double " << d << " is ";
    cout << dp << endl;
    char c;
    cout << "Enter the character value" << endl;
    cin >> c;
    cout << "The address of character " << c << " is ";
    char *cp = &c;
    cout << cp << endl;
    cout << "The updated address of character " << c << " is ";
    cp++;
    cout << cp << endl;
    return 0;
}