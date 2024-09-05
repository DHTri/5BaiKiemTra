#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int nt(int n)
{
    if(n < 2) 
    return 0;
    for(int i = 2;i<=sqrt(n);i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int kt(int n)
{
    int s = sqrt(n);
    if(s*s == n && nt(s))
        return 1;
    return 0;
}

int main()
{
    freopen("TPR.INP" , "r" , stdin);
    freopen("TPR.OUT" , "w" , stdout);
    int n;cin>>n;
    int d = 0;
    for(int i =4;i<=n;i++)
        if(kt(i))
            d++;
    cout<<d;
} 
