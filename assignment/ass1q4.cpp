// assignment question 4 code (recurssion) 
#include <iostream>
using namespace std;

int nCr(int n, int r) {
    if (r == 0 || r == n) return 1;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main() {
    cout << "10C0 = " << nCr(10,0) << endl;
    cout << "6C3 = " << nCr(6,3) << endl;
    cout << "8C5 = " << nCr(8,5) << endl;
    return 0;
}
