#include <bits/stdc++.h>
using namespace std;
int* replaceWithProd(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                sum1 += arr[j];
            }
            else {
                sum2 += arr[j];
            }
        }
        arr[i] = sum1 * sum2;
    }
    return arr;
}
int main() {
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int* ans = replaceWithProd(arr,n);
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}