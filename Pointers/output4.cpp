#include <iostream>
using namespace std;

int main() {
    int a[10];
    a[0]=5;
    a[1]=10;
    cout << "The 0th element of the array is" << " ";
    cout << *(a) << endl;
    cout << "The 1st element of the array is" << " ";
    cout << *(a+1) << endl;
    return 0;
}