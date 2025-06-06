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
    ll temp,result=0;
    for(int i=0; i<n; i++)
    {
        sf temp;
        if(temp>i+1 && result<temp-i-1)
        {
            result=temp-i-1;
        }
    }
    pf result;
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
