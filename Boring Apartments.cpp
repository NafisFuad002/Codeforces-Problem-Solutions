#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int num,ranges,dig;
    sf num;
    dig=num%10;

    if(num>1000)
    {
        ranges=10;
    }
    else if(num>100)
    {
        ranges=6;
    }
    else if(num>10)
    {
        ranges=3;
    }
    else
    {
        ranges=1;
    }
    pf ranges+(dig-1)*10;
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
