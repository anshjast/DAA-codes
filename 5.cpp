//to calculate integer square root using divide and conquer (binary search)
#include <iostream>
using namespace std;

int integerSquareRoot(int x) {
    if (x < 2) return x;
    int left = 1, right = x / 2, ans = 0;
    while (left <= right ) {
        int mid = left + (right - left) / 2;
        if (mid <= x / mid) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int result = integerSquareRoot(n);
    cout << "The integer square root of " << n << " is " << result << endl;
    return 0;
}