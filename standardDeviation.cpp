/*          The function accepts an array arr of 'n' positive Integers as its arguments. 
            You are required to calculate the Standard deviation of n positive integers 
            in array 'arr'. and return.

            Input  :- 7
                      3 8 4 2 5 6 7
            Output :- 2.00
*/

#include <bits/stdc++.h>
using namespace std;

void standardDeviation(int arr[], int size) {
        int sum = 0;
        float avg = 0;
        for(int i = 0; i < size; i++) {
            sum += arr[i];
        }
        avg = sum / size;
        int ans = 0;
        for(int i = 0; i < size; i++) {
            ans += pow((arr[i] - avg),2);
        }
        // avg = round(avg);
        float res = ans / size;
        // cout<<avg<<endl;
        // cout<<ans<<endl;
        cout<<fixed<<setprecision(2)<<sqrt((float)ans/size);
}
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin>>arr[i];
    }
    standardDeviation(arr,t);

    return 0;
}