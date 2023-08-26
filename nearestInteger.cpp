#include <bits/stdc++.h>
using namespace std;
int nearestInteger(int num,int m) {
    float temp = (float)num/m;
    return round(temp)*m;
    // return 0;
}
int main(){
    int num;
    cin>>num;
    int m;
    cin>>m;
    cout<<nearestInteger(num,m);
    return 0;
}