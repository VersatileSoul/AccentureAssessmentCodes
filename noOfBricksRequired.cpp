#include <bits/stdc++.h>
using namespace std;

int fun(int n) {
    if(n == 0) {
        return 0;
    }
    return 2 * n + n - 1 + fun(n-1);
}

int main() {
    int n;
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += 2 * i + i - 1;
    }

    int ans = n * (3 * n + 1) / 2 ;

    cout << ans << " " << fun(n) << " " << sum;
}

