// f[n] = summation (i=0 to n) (n-i) * f[i] ; f[0]  = 1 //
#include <iostream>
using namespace std;
 int main() {
    int n;
    cin >> n;
    
    int f[n + 1];
    for(int k = 0; k <= n; k++) 
    {
        f[k] = 0;
    }
    f[0] = 1;
    for (int i = 1; i <=n; i++) 
    {
        for (int j = 0; j<i; j++)
        {
            f[i] += (i-j) * f[j];
        }
    }
    cout<< f[n];
}