//https://codeforces.com/contest/1725/problem/B
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
    ll n,d,i,j,counter=0,x;
    sf n>>d;
    ll arr[n];
    for(i=0; i<n; i++)
    {
        sf arr[i];
    }
    sort(arr,arr+n);
    for(i=0,j=n-1; ; )
    {
        if(j<0 || i>n-1)
        {
            break;
        }
        x=ceil(d/(arr[j]*1.0));
        if(x*arr[j]==d)
        {
            x++;
        }
        if(j-i+1>=x)
        {
            j--;
            i+=x-1;
            counter++;
        }
        else
        {
            break;
        }
    }
    pf counter; nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    //sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
