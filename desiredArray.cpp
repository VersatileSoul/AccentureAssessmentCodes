/*              You have to find the 'k' smallest integers that are 
                not divisible by any of the 'n' integers and return 
                the sum of all 'k' integers

                Input  :- 5
                          2 3 4 5 6
                          4
                Output :- 32

*/


#include <bits/stdc++.h>
using namespace std;
int desiredArray(int arr[], int n, int k) {
    int flag = 0;
    int sum = 0;
        for(int i = 1; i < INT_MAX; i++) {
            if(k==0) break;
            for(int j = 0; j < n; j++) {
                if(i%arr[j] != 0) {
                    flag++;
                }
            }
            // cout<<flag<<endl;
            if(flag == n) {
                // cout<<i<<" ";
                sum += i;
                k--;
            }
           flag = 0;
        }
        return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<desiredArray(arr,n,k);
    return 0;
}