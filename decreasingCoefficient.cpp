/*
        Permutation p is an ordered set of integers p1,  p2,  ...,  pn, consisting of n distinct positive 
        integers, each of them doesn't exceed n. We'll denote the i-th element of permutation p as pi. 
        We'll call number n the size or the length of permutation p1,  p2,  ...,  pn.

        The decreasing coefficient of permutation p1, p2, ..., pn is the number of such i (1 ≤ i < n), 
        that pi > pi + 1.

        You have numbers n and k. Your task is to print the permutation of length n with decreasing coefficient k.

        Input :- 5 2
        Output :- 1 

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;                                                
    int arr[n] = {0};                                           
    for(int i = 0; i < n; i++) {                                
         arr[i] = i + 1;                                         
    }
    int i = n - k - 1;
    int j = n - 1;
    while(i <= j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
}