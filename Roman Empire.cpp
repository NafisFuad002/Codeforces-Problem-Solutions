//https://codeforces.com/gym/106045/problem/B
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
    int n;
    sf n;
    while(n>0)
    {
        if(n>=1000)
        {
            n-=1000;
            pf "M";
        }
        if(n>=900)
        {
            n-=900;
            pf "CM";
        }
        else if(n>=500)
        {
            n-=500;
            pf "D";
        }
        else if(n>=400)
        {
            n-=400;
            pf "CD";
        }
        else if(n>=100)
        {
            n-=100;
            pf "C";
        }
        else if(n>=90)
        {
            n-=90;
            pf "XC";
        }
        else if(n>=50)
        {
            n-=50;
            pf "L";
        }
        else if(n>=40)
        {
            n-=40;
            pf "XL";
        }
        else if(n>=10)
        {
            n-=10;
            pf "X";
        }
        else if(n>=9)
        {
            n-=9;
            pf "IX";
        }
        else if(n>=5)
        {
            n-=5;
            pf "V";
        }
        else if(n>=4)
        {
            n-=4;
            pf "IV";
        }
        else if(n>=1)
        {
            n-=1;
            pf "I";
        }
    }
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
