#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    vector<int>v;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            cnt++;
        }
        else {
            v.push_back(arr[i]);
        }
    }
    sort(v.begin(),v.end());
    while(cnt--) {
        v.push_back(0);
    }
    for(int it : v) {
        cout << it << " ";
    }
    return 0;
}