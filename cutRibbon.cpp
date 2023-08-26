/*
        Ramesh has a ribbon, its length is n. He wants to cut the ribbon 
                in a way that fulfils the following two conditions:

        1. After the cutting each ribbon piece should have length a, b or c.
        2. After the cutting the number of ribbon pieces should be maximum.
        3. Help Ramesh and find the number of ribbon pieces after the required cutting.

        Input  :- 5 5 3 2
        Output :- 2
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3] = {a,b,c};
    sort(arr,arr+n);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    int ans = 0;
    int maxi = n/a + 1;
    int flag = 0;
    int count = 0;
    for(int x = maxi; x >= 0; x--) {
        for(int y = maxi; y >= 0; y--) {
            int zc = n - (x * a + y * b);
            count++;
            if(zc % c == 0 && zc >= 0) {
                // cout<<x<<" "<<y<<endl;
                ans = x + y + zc / c;
                flag = 1;
                break;
            }
            double z = zc / (double) c;
            if(z == (int) z) {
                ans = max(ans,x + y + (int) z);
            }
            
        }
        if(flag) {
                break;
            }
    }
    cout<<ans << "  " << count << endl;
    return 0;
}