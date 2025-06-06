#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,so=0,se=0,num;
    sf n;
    for(int i=1; i<=n; i++)
    {
        sf num;
        if(i%2==0)
        {
            se=se+num;
        }
        else
        {
            so=so+num;
        }
    }
    pf so-se; nl
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
