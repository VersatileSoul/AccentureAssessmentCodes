/*          The function accepts four integers 'a', 'b', 'c' and 'd' as its argument. 
            Implement the function to find the sum of distinct number and subtract the 
            duplicate number and return.
            Hello Ajay
            Input  :- 4 5 4 8
            Output :- 13
*/

#include <bits/stdc++.h>
using namespace std;
int addDistinctSubDuplicate(int a,int b,int c,int d) {
    int arr[4] = {a,b,c,d};
    map<int,int>mp;
    for(int i = 0; i < 4; i++) {
        mp[arr[i]]++;
    }
    int sum = 0;

    for(auto it:mp) {
        if(it.second > 1) {
            sum -= it.first;
        }
        else
            sum += it.first;
    }
    return sum;
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<addDistinctSubDuplicate(a,b,c,d);
    return 0;
}
