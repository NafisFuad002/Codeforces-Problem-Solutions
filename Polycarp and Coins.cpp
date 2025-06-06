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
    if(n%3==0)
    {
        pf n/3<<" "<<n/3;
        nl
    }
    else if((n-1)%3==0)
    {
        pf (n/3)+1<<" "<<(n/3);
        nl
    }
    else if((n+1)%3==0)
    {
        pf (n/3)<<" "<<(n/3)+1;
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
