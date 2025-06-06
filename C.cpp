#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int flag=1,pre=-1,pre2=-1,mx,mn;
    ll n,k;
    sf n>>k;
    mx=-10;mn=k+1;
    ll a[n],b[n];
    for(ll i=0; i<n; i++)
    {
        sf a[i];
        if(mx<a[i])
        {
            mx=a[i];
        }
        if(mn>a[i])
        {
            mn=a[i];
        }
    }
    for(ll i=0; i<n; i++)
    {
        sf b[i];
        if(pre==-1 && b[i]!=-1)
        {
            pre=b[i]+a[i];
        }
        if(pre!=-1 && b[i]!=-1)
        {
            pre2=b[i]+a[i];
            if(pre!=pre2)
            {
                flag=0;
            }
        }
    }

    if(pre!=-1 && flag==1)
    {
        for(ll i=0; i<n; i++)
        {
            if(pre-a[i]<0 || pre-a[i]>k)
            {
                flag=0;
                break;
            }
        }
    }
    if(pre==-1)
    {
        pf mn+k-mx+1;
    }

    else if(flag==0)
    {
        pf "0";
    }
    else
    {
        pf "1";
    }
    nl
    //pf mx<<" "<<mn;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    sf t;
    while(t>0)
    {
        fun();
        t--;
    }

    return 0;
}
