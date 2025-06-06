#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,maximum=0,s,v,maximum2=0;
    sf n;
    if(n%2==0)
    {
        s=n/2;
    }
    else
    {
        s=(n+1)/2;
    }
    for(int i=0; i<n; i++)
    {
        sf v;
        if(i%2==0 && maximum<v)
        {
            maximum=v;
        }
        else if(i%2!=0 && maximum2<v)
        {
            maximum2=v;
        }
    }
    if(maximum>=maximum2)
    {
        pf maximum+s;
        nl
    }
    else
    {
        if(n%2!=0)
        {
            s=((n-1)/2);
        }
        pf maximum2+s;
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
