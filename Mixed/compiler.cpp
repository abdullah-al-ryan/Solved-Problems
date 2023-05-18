#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    getline(cin, c);
    cout<<c;
      int temp = 0,j;
    for (j = 0; j < str.lenth(); j++) {


        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get
        // the integer value of the digit.
        temp = temp * 10 + (c[j] - '0');
    }
    cout<<temp;
}
