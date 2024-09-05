#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int demuoc(int n)
{
    int d = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            d++;  
            if (i != n / i) {
                d++;
            }
        }
    }
    return d;
}

int main()
{
    int n;cin>>n;
    int a[n];
    int max = 0, res = 0;
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
        int dem = demuoc(a[i]);
        if(dem > max)
        {
            max = dem;
            res = a[i];
        }
    }
    cout<<res;
} 
