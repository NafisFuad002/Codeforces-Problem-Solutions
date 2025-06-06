//https://codeforces.com/contest/2091/problem/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,x,counter=0,temp,c2=0,q,m;
    sf n>>x;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        sf arr[i];
        if(arr[i]>=x)counter++;
    }
    sort(arr,arr+n);reverse(arr,arr+n);
    //m=n-counter;
    ll k=1;
    for(ll i=counter; i<n; i++)
    {
        //q=ceil(x/arr[m-1]);
        if(arr[i]*k>=x)
        {
            c2++;
            k=1;
            //nl pf arr[i]; nl
        }
        else
        {
            k++;
        }
    }
    pf counter+c2;nl
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
