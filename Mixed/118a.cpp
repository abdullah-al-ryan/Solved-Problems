#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char str[100],x[100];
    cin>>str;
    for(int i=0;i<strlen(str);i++)
    {
      if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='y' ||str[i]=='Y')
            continue;
    cout<<"."<<static_cast<char>(std::tolower(str[i]));
    }
    puts("");
    return 0;
}
