#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,k,p,res;
    sf n>>k>>p;
    k=abs(k);
    if(k%p==0)
    {
        res=k/p;
    }
    else
    {
        res=(k/p)+1;
    }
    if(res>n)
    {
        pf "-1";
    }
    else
    {
        pf res;
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
