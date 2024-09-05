#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin>>s;
    int t = 0, res = 0;
    for(int i = 0;i<=s.length();i++)
    {
        if(isdigit(s[i]))
            t = t*10+(s[i]-48);
        else
        {
            if(t > res)
                res = t;
            t = 0;
        }
    }
    cout<<res;
} 
