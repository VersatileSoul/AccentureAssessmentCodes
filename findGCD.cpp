/*          GCD (Greatest Common Divisor) or HCF (Highest Common Factor) 
            of two numbers is the largest number that divides both of them. 
*/

#include <iostream>
using namespace std;
int findGCD(int num1, int num2) {
        while(num1 != 0 && num2 != 0) {
            if(num1 > num2) {
                num1 = num1 % num2;
            }
            else
                num2 = num2 % num1;
        }
        if(num1 != 0) {
            return num1;
        }
        else {
            return num2;
        }
    }
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<findGCD(num1,num2);
    return 0;
}