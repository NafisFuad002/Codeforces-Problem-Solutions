#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m=0;
    sf n;
    if(n%2==1)
    {
        pf (n+1)/2<<" ";
        m=(n+1)/2;
    }
    while(n>0)
    {
        if(n!=m)
        {
            pf n<<" ";
        }
        n--;
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
