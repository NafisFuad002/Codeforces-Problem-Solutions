#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a<b)
    {
        cout<<"1"<<nl;
    }
    else if(a==b && c>a)
    {
        cout<<"1"<<nl;
    }
    else if(a==b && c<a)
    {
        cout<<"3"<<nl;
    }
    else if(a>b && c<b)
    {
        cout<<"2"<<nl;
    }
    else if(a>b && c>b)
    {
        if((c-b)+(c-1)>(a-1))
        {
            cout<<"1"<<nl;
        }
        else if((c-b)+(c-1)<(a-1))
        {
            cout<<"2"<<nl;
        }
        else if((c-b)+(c-1)==(a-1))
        {
            cout<<"3"<<nl;
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
