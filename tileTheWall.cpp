#include <bits/stdc++.h>
using namespace std;
int ans(int m, int n) {
    int temp[m+1];
    temp[0] = 0;
    for(int i = 1; i <= m; i++) {
        if(i < n) {
            temp[i] = 1;
        }
        else if(i == n) {
            temp[i] = 2;
        }
        else {
            temp[i] = temp[i-1] + temp[i-n];
        }
    }
    return temp[m];
}
int main() {
    int m,n;
    cin >> m >> n;
    cout << ans(m,n);
}