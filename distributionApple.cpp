/*      A purchased N apples for B and C. Now he wants to share 
        all the apples with his friends
        
        One apple typically weighs between 100 and 200 grammes. 
        A naturally wants to protect his pals Since B and C received 
        an identical quantity of apples, the weight of the apples they 
        received must also be equal.

        A, however, is unable to divide an apple into multiple pieces 
        because he is currently without a knife. If there is fair way to 
        distribute all the apples among his friends, let him know.

        TestCase :- 3 100 200 100
        Answer :- YES
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int apple[n];
    for(int i = 0; i < n; i++) {
        cin>>apple[i];
    }
    int totalAppleWeight = 0;
    for(int i = 0; i < n; i++) {
        totalAppleWeight += apple[i];
    }
    if(totalAppleWeight % 2 == 0) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}