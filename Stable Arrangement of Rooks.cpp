#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,k;
    sf n>>k;
    if((n%2==0 && k>n/2) || (n%2!=0 && k>(n+1)/2))
    {
        pf "-1";
        nl
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i==j && k>0 && i%2!=0)
                {
                    pf "R";
                    k--;
                }
                else
                {
                    pf ".";
                }
            }
            nl
        }
    }
    //nl
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
