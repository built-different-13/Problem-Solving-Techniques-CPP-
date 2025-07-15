#include <iostream>
using namespace std;

int sum(int *a, int size) {
    int ans=0;
    for (int i=0; i<size; ++i) {
        ans = ans + *(a+i);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    cout << "The sum of the elements of the array is" << " ";
    int output = sum(arr,n);
    cout << output << endl;
    return 0;
}