/*      The function accepts an integer array 'arr of size n and an integer k. 
        Implement the function to return a subarray length of k which has least sum.

        Input  :- 7
                  3 2 1 -4 6 3 1
                  3
        Output :- 2 1 -4
*/

#include <bits/stdc++.h>
using namespace std;

int* subArray(int* arr, int n, int k) {
    int miniSum = INT_MAX;
    int currSum = 0;
    int start = 0;

    for (int i = 0; i < n - k + 1; i++) {
        for (int j = i; j < i + k; j++) {
            currSum += arr[j];
        }
        if (currSum < miniSum) {
            miniSum = currSum;
            start = i;
        }
        currSum = 0;
    }

    int* resultArr = new int[k];
    for (int i = 0; i < k; i++) {
        resultArr[i] = arr[start + i];
    }

    return resultArr;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int* resultArr = subArray(arr, n, k);

    // cout << "Subarray with minimum sum: ";
    for (int i = 0; i < k; i++) {
        cout << resultArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] resultArr;

    return 0;
}
