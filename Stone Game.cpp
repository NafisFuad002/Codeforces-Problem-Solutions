#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,mx=0,mini=101,temp,max_ind,min_ind;
    sf n;
    for(int i=1; i<=n; i++)
    {
        sf temp;
        if(mx<temp)
        {
            mx=temp;
            max_ind=i;
        }
        if(mini>temp)
        {
            mini=temp;
            min_ind=i;
        }
    }
    if(max_ind<min_ind)
    {
        pf min(min(min_ind, n-max_ind+1), max_ind+n-min_ind+1);
    }
    else if(max_ind>min_ind)
    {
        pf min(min(max_ind, n-min_ind+1), min_ind+n-max_ind+1);
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
