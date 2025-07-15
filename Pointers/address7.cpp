#include <iostream>
using namespace std;

void pointerIncrement(int *p) {
    p++;
}

int main() {
    int i=10;
    int *p = &i;
    cout << p << endl;
    pointerIncrement(p);
    cout << p << endl;
    return 0;
}