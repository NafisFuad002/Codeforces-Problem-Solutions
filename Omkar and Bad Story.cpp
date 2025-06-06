//https://codeforces.com/problemset/problem/1536/A
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
    int n,flag=1;
    sf n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
        if(arr[i]<0)
        {
            flag=0;
        }
    }
    sort(arr,arr+n);
    if(flag==0)
    {
        pn
    }
    else
    {
        py
        pf arr[n-1]+1; nl
        for(int i=0; i<=arr[n-1]; i++)
        {
            pf i<<" ";
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
