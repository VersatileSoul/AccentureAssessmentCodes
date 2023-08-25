/*              A number is called beutiful if it leads to 1 after a sequence 
                of steps wherein each step number is replaced by the sum of squares 
                of its digit that is if we start with Happy Number and keep replacing 
                it with digits square sum, we reach 1. 

                Input :- 19
                Output :- 1
*/

#include <bits/stdc++.h>
using namespace std;
bool fun(int n,set<int>&st) {
    int sum = 0;
        while(n > 0) {
            int rem = n % 10;
            int sq = rem * rem;
            sum += sq;
            n /= 10;
            if(n == 0) {
                if(sum == 1) {
                return true;
                }
                if(st.find(sum) != st.end()) 
                    return false;
                else {
                    st.insert(sum);
                    n = sum;
                    sum = 0;
                }
            }
        }
}
int main(){
    int n;
    cin>>n;
    set<int>st;
    cout<<fun(n,st);
    return 0;
}