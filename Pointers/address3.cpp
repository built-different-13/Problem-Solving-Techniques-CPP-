#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter the value of integer" << endl;
    cin >> i;
    int *p = &i;
    cout << "The address of integer " << i << " is ";
    cout << p << endl;
    double d;
    cout << "Enter the value of double" << endl;
    cin >> d;
    double *pd = &d;
    cout << "The address of double " << d << " is ";
    cout << pd << endl;
    float f;
    cout << "Enter the value of float" << endl;
    cin >> f;
    float *pf = &f;
    cout << "The address of float " << f << " is ";
    cout << pf << endl;
    return 0;
}