#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,sum=0;
    sf n;
    if(n==1)
    {
        pf "1";
    }
    else if(n==2)
    {
        pf "2";
    }
    else if(n==3)
    {
        pf "3";
    }
    else if(n==4)
    {
        pf "5";
    }
    else if(n%2==0)
    {
        for(int i=1; i<n; i+=2)
        {
            sum+=i;
        }
        pf sum+1;
    }
    else
    {
        for(int i=0; i<n; i+=2)
        {
            sum+=i;
        }
        pf sum+1;
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
