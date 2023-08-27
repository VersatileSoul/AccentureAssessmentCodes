#include <bits/stdc++.h>
using namespace std;
int res(int arr[], int n, int x, int y) {
    int cnt = n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
        if(arr[i] == x && arr[j] == y || arr[i] == y && arr[j] == x) {
            // cout << i << " - " << j-1 << endl;
            cnt = min(cnt,abs(i-j));
            // cout << cnt - 1 << endl;
        }
        }
    }
    return cnt - 1;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x,y;
    cin >> x >> y;
    int ans = res(arr,n,x,y);
    cout << ans;
}