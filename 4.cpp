// binary search example
#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == target) {
            return mid;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter number of elements (sorted): ";
    cin >> n;
    int a[n];
    cout << "Enter elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter element to search: ";
    cin >> key;
    int result = binarySearch(a, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
}