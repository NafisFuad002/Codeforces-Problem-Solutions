#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a>=x && b>=y)
    {
        cout<<"YES"<<nl;
    }
    else if(a>=x && b<y)
    {
        if(b+c >= y)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
    else if(a<x && b>=y)
    {
        if(a+c >= x)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
    else
    {
        if((x-a)+(y-b) <= c)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
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
