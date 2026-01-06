//https://codeforces.com/contest/2136/problem/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl
#define arrin for(int i=0; i<n; i++){sf arr[i];}
#define arr2in for(int i=0; i<n; i++){sf arr2[i];}


ll gcd(ll a,ll b);
ll max_value_in_arr(ll st_ind, ll en_ind, ll arr[]);
ll min_value_in_arr(ll st_ind, ll en_ind, ll arr[]);
bool element_checker_in_array(char cha);


void fun()
{
    int n,k,counter=0,temp=0;
    sf n>>k;
    int m=n;
    string s;
    sf s;
    int v[n];
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1')
        {
            counter++;
        }
        else
        {
            temp=max(temp,counter);
            counter=0;
        }
    }
    temp=max(temp,counter);
    counter=0;
    if(temp>=k)
    {
        pn
    }
    else
    {
        py
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='0')
            {
                //pf m--<<" ";
                //v.push_back(m);
                //m--;
                v[i]=m--;
            }
        }
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                //pf m--<<" ";
                //v.push_back(m--);
                v[i]=m--;
            }
        }
        for(auto it:v)
        {
            pf it<<" ";
        }
        nl
    }
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
bool element_checker_in_array(char cha)
{
    char arra[]= {'a','e','i','o','u','y'};
    if(find(arra,arra+6,cha) != arra+6)
    {
        return true;
    }
    else
    {
        return false;
    }
}
