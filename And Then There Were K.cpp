#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n;
    sf n;
    int i;
    for(i=0; pow(2,i)<=n; i++)
    {

    }
    if(n==1)
    {
        pf "0";
    }
    else if(pow(2,i-1)==1)
    {
        pf "1";
    }
    else
    {
        pf (ll)pow(2,i-1)-1;
    }
    nl
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
