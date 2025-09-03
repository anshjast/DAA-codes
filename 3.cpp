//linear search example
#include <iostream>
using namespace std;

int linearSearch(int a[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (a[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;
    cout<< "Enter number  of elements : ";
    cin >> n;
    int a[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter element to search : ";
    cin >> key;
    int result = linearSearch(a, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
}