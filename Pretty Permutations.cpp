#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n;
    sf n;
    if(n%2==0)
    {
        for(int i=2; i<=n; i+=2)
        {
            pf i<<" "<<i-1<<" ";
        }
        nl
    }
    else
    {
        pf "3 1 2";
        for(int i=5; i<=n; i+=2)
        {
            pf " "<<i<<" "<<i-1;
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
