#include <bits/stdc++.h>
using namespace std;
int diffSumofDigits(int arr[], int size) {
    int numberSum = 0, digitSum = 0;
    for(int i = 0; i < size; i++) {
        int num = arr[i];
        numberSum += arr[i];
        while(num > 0) {
            int rem = num % 10;
            digitSum += rem;
            num /= 10;
        }
    }
    int x = numberSum % 10;
    int y = digitSum % 10;
    return y - x;
}
int main(){
    int m;
    cin>>m;
    int arr[m];
    for(int i = 0; i < m; i++) {
        cin>>arr[i];
    }
    cout<<diffSumofDigits(arr,m);
    return 0;
}