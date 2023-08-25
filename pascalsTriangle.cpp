/*
    Pascal’s triangle is a triangular array of binomial coefficients. 
    Write a function that takes an integer value n as input and prints 
    first n lines of Pascal’s triangle.

    Input  :- 4
    Output :-           1
                      1   1
                    1   2   1
                  1   3   3   1
*/


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    int arr[n][n] = {0};
    for(int i = 0; i < n; i++) {
        // spaces
        for(int j = n - 1; j > i; j--) {
            cout << " ";
        }
        // code
        int num = 1;
        for(int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
}