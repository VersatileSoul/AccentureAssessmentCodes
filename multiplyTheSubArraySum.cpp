#include <bits/stdc++.h>
using namespace std;
int multiply (int arr[], int n) {
    int i = 1;
    int j = n - 2;
    int sum1 = arr[0];
    int sum2 = arr[n-1];
    while(arr[i-1] < arr[i] || arr[j] > arr[j+1]) {
        if(arr[i] > arr[i-1]) {
            sum1 += arr[i];
            i++;
        }
        if(arr[j] > arr[j+1]) {
            sum2 += arr[j];
            j--;
        }
    }
    return sum1 * sum2; 
}
int main() {
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    cout << multiply(arr,n) << endl;
}