#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m,k,sum;
    sf n>>m>>k;
    sum=n-1+(n*(m-1));
    if(sum==k)
    {
        pf "YES";
    }
    else
    {
        pf "NO";
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
