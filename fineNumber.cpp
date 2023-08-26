/*              The function accepts two arrays 'a' and 'b' of size 'n' and 'm' respectively. 
                Implement the function to compute a fine number and return. A fine number is 
                the greatest number that can be obtained by taking the difference of two numbers 
                such that one of the two numbers is taken from array 'a' and another
                is taken from array 'b'.
                
                Input  :-   5
                            6
                            1 2 3 4 5
                            6 7 8 9 10 11
                Output :-   10                
*/

#include <bits/stdc++.h>
using namespace std;
int fineNumber(int a[], int b[], int aSize, int bSize) {
    sort(a,a+aSize);
    sort(b,b+bSize);
    int max1 = a[aSize - 1] - b[0];
    int max2 = b[bSize - 1] - a[0];
    cout<<a[aSize-1]<<" "<<a[0]<<endl;
    cout<<b[bSize-1]<<" "<<b[0]<<endl;
    cout<<max1<<" "<<max2<<endl;
    return max(max1,max2);
}
int main(){

    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i = 0; i < m; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>b[i];
    }
    cout<<fineNumber(a,b,m,n);
    return 0;
}