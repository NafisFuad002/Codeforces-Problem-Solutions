#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,counter=0;
    sf n;
    int flag=1;
    while(n!=1)
    {
        if(n%6==0)
        {
            n=n/6;
            counter++;
        }
        else if(n%3==0)
        {
            n=n*2;
            counter++;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        pf counter;
        nl
    }
    else
    {
        pf "-1";
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
