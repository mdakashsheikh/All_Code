#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int n; 
    ll x;
    int ans=0;
    cin>>n>>x;

    for(int i=1; i<=n; i++)
    {
        if(x%i==0 && x/i<=n)
            ans++;
    }
    cout<<ans<<endl;

    return 0;
}