#include <iostream>
using namespace std;
int* nextSmallerNumber(int arr[], int n) {
    int* res = new int[n];
    int i,j,next;
    for(i = 0; i < n; i++) {
        next = -1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                next = arr[j];
                break;
            } 
        }
        res[i] = next;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int* res = nextSmallerNumber(arr,n);
    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}