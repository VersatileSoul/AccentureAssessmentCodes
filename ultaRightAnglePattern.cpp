#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0;i < t; i++) {
        for(int k = 0; k < i; k++) {
            cout<<" ";
        }
        for(int j = i; j < t; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}