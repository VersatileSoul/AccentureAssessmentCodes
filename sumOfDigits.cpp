/*
        You are required to implement the following function: 
        
        The function accepts an array arr' of 'npositive integers 
        as its argument. 
        Let's suppose:
            f(x) = Sum of digits of an integer

        You are required to calculate the value of following:

        F1 =[ f(arr[0]) + f(arr[1]) + f(arr[2]) +.............+f(arr[n-1])] % 10 

        F2 =[( arr[0] + arr[1] + arr[2] +................+arr[n-1])] % 10

        F = F1 - F2 and return the value of F.
        Note: n > 0

        Input  :-  10
                   11 14 16 10 9 8 24 5 4 3
        Output :-  -4 
    

*/



#include <bits/stdc++.h>
using namespace std;
void fun(int arr[], int n) {
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        sum2 += num;
        while(num > 0) {
            int rem = num % 10;
            sum1 += rem;
            num /= 10;
        }
    }
    cout << sum1 << " " << sum2 << endl;
    cout << sum1 % 10 - sum2 % 10 << endl;
}
int main() {
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    fun(arr,n);
}