// Check Whether a Number is an Autobiographical Number or Not

/*          An autobiographical number is a number such that the 
            first digit of it counts how many zeroes are there in it, 
            the second digit counts how many ones are there and so on. 
            For example, 1210 has 1 zero, 2 ones, 1 two and 0 threes. 

            Input :- 1210
            Output :- 3                
*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int num = stoi(str);
    int arr[str.size()] = {0};
    while(num > 0) {
        int rem = num % 10;
        arr[rem]++;
        num/=10;
    }
    string str1 = "";
    for(int i = 0; i < str.size(); i++) {
        str1 += to_string(arr[i]);
    }
    cout<<str<<" "<<str1<<endl;
    set<char>st;
    if(str == str1) {
        for(int i = 0; i < str.size(); i++) {
            st.insert(str[i]);
        }
        cout<<st.size()<<endl;
    }
    else {
        cout<<0<<endl;
    }
    return 0;
}