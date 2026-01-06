//https://codeforces.com/contest/2121/problem/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

ll gcd(ll a,ll b);
ll max_value_in_arr(ll st_ind, ll en_ind, ll arr[]);
ll min_value_in_arr(ll st_ind, ll en_ind, ll arr[]);

void fun()
{
    int n,s,res;
    sf n>>s;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    sort(arr,arr+n);
    int a=(arr[0]>s) ? s:arr[0],b=s,c=arr[n-1];
    if(b>a && b<c)
    {
        res=((b-a)<(c-b)) ? ((b-a)*2)+(c-b):((c-b)*2)+(b-a);
    }
    else if((b==a && b<c)||(b==c && c!=a))
    {
        res=c-a;
    }
    else if(a==b && b==c)
    {
        res=0;
    }
    else if(b>c)
    {
        res=b-a;
    }
    pf res;
    nl
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    sf t;
    while(t>0)
    {
        fun();
        t--;
    }

    return 0;
}
ll gcd(ll a,ll b)
{
    while(b!=0)
    {
        ll temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
ll max_value_in_arr(ll st_ind, ll en_ind, ll arr[])
{
    ll t=INT_MIN;
    for(ll i=st_ind; i<=en_ind; i++)
    {
        if(t<arr[i])
        {
            t=arr[i];
        }
    }
    return t;
}
ll min_value_in_arr(ll st_ind, ll en_ind, ll arr[])
{
    ll t=INT_MAX;
    for(ll i=st_ind; i<=en_ind; i++)
    {
        if(t>arr[i])
        {
            t=arr[i];
        }
    }
    return t;
}
