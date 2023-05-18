#include <bits/stdc++.h>
using namespace std;

long long priority(char ch)
{
    if(ch=='(' || ch==')') return 0;
    if(ch=='+' || ch=='-') return 1;
    if(ch=='*' || ch=='/') return 2;
}

long long operatr(long long x,long long y, char ch)
{
    if(ch=='+') return (x+y);
    if(ch=='-') return (x-y);
    if(ch=='*') return (x*y);
    if(ch=='/') return (x/y);
}

long long calculation(string a)
{
    stack <long long> x;
    stack <char> q;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i] == ' ') continue;
        else if(a[i] == '(')
        {
            q.push(a[i]);
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            long long val = 0;
            while(i < a.length() && (a[i]>='0' && a[i]<='9'))
            {
                val = (val*10) + (a[i]-'0');
                i++;
            }
            x.push(val);
            i--;
        }
        else if(a[i] == ')')
        {
            while(q.empty()==false && q.top() != '(')
            {
                long long val2 = x.top();
                x.pop();
                long long val1 = x.top();
                x.pop();
                char op = q.top();
                q.pop();
                x.push(operatr(val1, val2, op));
            }
            if(q.empty()==false)
            {
                q.pop();
            }
        }
        else
        {
            while(q.empty()==false && priority( q.top() ) >= priority(a[i]))
            {
                long long v2 = x.top();
                x.pop();
                long long v1 = x.top();
                x.pop();
                char c = q.top();
                q.pop();
                x.push( operatr(v1, v2, c) );
            }
            q.push(a[i]);
        }
    }
    while(q.empty()==false)
    {
        long long v2 =x.top();
        x.pop();
        long long v1 = x.top();
        x.pop();
        char c = q.top();
        q.pop();
        x.push( operatr(v1, v2,c) );
    }
    return x.top();
}

int main()
{
    string str;
    getline(cin, str);
    cout<<calculation(str)<<endl;

    return 0;
}




