/*
        A = 1
        B = 10
        C = 100
        D = 1000
        E = 10000
        F = 100000
        G = 1000000

        Assumption: String contains upper case letters only
        Note:       The number equivalent for any letter other than (A, B, C, D, E, F, G) is 0

        Input  :- DCCBAA
        Output :- 1212
*/


#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;

    int arr[26] = {0};
    int a = 1;
    int sum = 0;

    for(int i = 0; i < 7; i++) {
        arr[i] = a;
        a*=10;
    }

    for(int i = 0; i < str.size(); i++) {
        int num = arr[str[i] - 'A'];
        sum += num;
    }
    
    cout << sum << endl;
}