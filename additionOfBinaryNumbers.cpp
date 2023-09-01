#include <iostream>
using namespace std;

string decimalToBinary(int a) {
    if (a == 0)
        return "0";

    string binary = "";
    while (a > 0) {                             //  16
        int rem = a % 2;                        //  rem -> 0                
        binary = to_string(rem) + binary;  
        cout << binary << endl;
        a /= 2;
    }

    return binary;
}

string addBinary(string a, string b) {
    int num1 = stoi(a, nullptr, 2); // Convert binary string to integer -> stoi("1011",nullptr,2) -> 11
    int num2 = stoi(b, nullptr, 2); // Convert binary string to integer -> 
    int sum = num1 + num2;
    cout<<num1<<" "<<num2<<endl;
    cout<<sum<<endl;
    return decimalToBinary(sum); // Convert sum to binary string (with leading zeros)
}

int main() {
    string binary1 = "1000";
    string binary2 = "1000";

    string result = addBinary(binary1, binary2);

    cout << "Binary Addition: " << result << endl;
    return 0;
}
