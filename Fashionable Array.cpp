//https://codeforces.com/contest/2110/problem/A
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
    int n,le=-1,lo=-1,fe=-1,fo=-1,x,y;
    sf n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
        if(fe==-1 && arr[i]==0)
        {
            fe=i+1;
        }
        if(fo==-1 && arr[i]==1)
        {
            fo=i+1;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(le==-1 && arr[i]==0)
        {
            le=i+1;
        }
        if(lo==-1 && arr[i]==1)
        {
            lo=i+1;
        }
    }
    x=(fe-1)+(n-le);
    y=(fo-1)+(n-lo);
    if(fe==-1 || le==-1)
    {
        x=INT_MAX;
    }
    if(fo==-1 || lo==-1)
    {
        y=INT_MAX;
    }
    if(x>=y)
    {
        pf y;
    }
    else
    {
        pf x;
    }
    nl
    //pf fe<<" "<<le<<" "<<fo<<" "<<lo; nl
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
