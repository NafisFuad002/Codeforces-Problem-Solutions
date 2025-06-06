#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,x;
    sf n>>x;
    for(int i=0; i<n; i++)
    {
        if(i!=x)
        {
            pf i<<" ";
        }
    }
    if(x!=n)
    {
        pf x;
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
