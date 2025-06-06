#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    ll n,counter=0;
    cin>>n;
    for(int i=1; i*i<=n; i++)
    {
        counter++;
    }
    for(int i=1; i*i*i<=n; i++)
    {
        ll x = sqrt(i*i*i);
        if(x*x != i*i*i)
        {
            counter++;
        }
    }
    cout<<counter<<nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t>0)
    {
        fun();
        t--;
    }

    return 0;
}
