//https://codeforces.com/contest/2107/problem/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

void fun()
{
    int n,flag=0,mx=-1;
    sf n;
    int arr[n];
    sf arr[0];
    for(int i=1; i<n; i++)
    {
        sf arr[i];
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
        if(arr[i-1]!=arr[i])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        pn
    }
    else
    {
        py
        for(int i=0; i<n; i++)
        {
            if(arr[i]==mx)
            {
                pf "1 ";
            }
            else
            {
                pf "2 ";
            }
        }
        nl
    }
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
