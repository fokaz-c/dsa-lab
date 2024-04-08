#include<iostream>
using namespace std;

string addBinary(string A, string B) {
    if (A.length() > B.length()) {
        return addBinary(B, A); 
    }
    int diff = B.length() - A.length();
    string temp(diff, '0');
    A = temp + A;
    string res(B.length(), '0'); 
    char carry = '0';
    for (int i = B.length() - 1; i >= 0; i--) {
        res[i] = (A[i] ^ B[i] ^ carry);
        carry = (A[i]&B[i]) | (carry&(A[i] | B[i]));
    }
    if (carry == '1') {
        res = '1' + res;
    }
    return res;
}


int main()
{
    string a = "10011";
    string b = "101";

    cout<<addBinary(a,b);

    return 0;
}
