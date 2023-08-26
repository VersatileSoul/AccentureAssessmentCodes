/*      The function accepts an array 'arr' of length 'len' and an integer 'n' as 
        its arguments. You are required to calculate the sum of every successive nth 
        element in the array and return.

        Input  :- 8
                  10 12 16 1 5 6 3 21
                  3
        Output :- 22
*/


#include <iostream>
using namespace std;

int sumSuccessive(int arr[], int len, int num) {
    int sum = 0; // Declare and initialize sum inside the function
    for (int i = num - 1; i < len; i += num) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    cout << sumSuccessive(arr, len, num);
    return 0;
}
