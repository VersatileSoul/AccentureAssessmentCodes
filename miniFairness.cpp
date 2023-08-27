#include <bits/stdc++.h>
using namespace std;
int res(int arr[], int n, int k) {
    sort(arr,arr+n);
    int fairness = INT_MAX;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;   
    for(int i = 0; i < n - k + 1; i++) {
        int mini = arr[i];
        int maxi = arr[i+k-1];
        fairness = min(fairness,maxi - mini);
        cout << fairness << " ";
    }
    cout << endl;
    return fairness;
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
    cout << res(arr,n,k);
    return 0;
}