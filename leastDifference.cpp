#include <bits/stdc++.h>
using namespace std;
int ans(int arr[], int n, int k) {
    int diff = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(abs(arr[i] - k) < diff) {
            diff = abs(arr[i] - k);
        }
    }
    return diff;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << ans(arr,n,k);
 }