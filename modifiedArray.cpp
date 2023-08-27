#include <bits/stdc++.h>
using namespace std;
int* ans(int* arr, int n) {
    int* res = new int[n];
    sort(arr,arr+n);
    int i = 0;
    int k = 0; 
    int j = n - 1;
    while(i <= j) {
        res[k++] = arr[i++];
        res[k++] = arr[j--]; 
    }
    return res;
}
int main() {
    int n; 
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int* res = ans(arr,n);
    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}