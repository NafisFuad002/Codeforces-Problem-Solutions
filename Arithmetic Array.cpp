#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,sum=0,i=0,element;
    sf n;
    while(i<n)
    {
        sf element;
        sum = sum + element;
        i++;
    }
    if(sum<n)
    {
        pf 1;
        nl
    }
    else if(sum==n)
    {
        pf 0;
        nl
    }
    else
    {
        pf sum-n;
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
