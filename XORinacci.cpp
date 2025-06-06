#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll a,b,c,n;
    sf a>>b>>n;
    c=a^b;

    //ata 3 ghor por por repeat korse.
    //f( 0,1,2 = 3,4,5 = 6,7,8 = ...)

    if(n%3==0)
    {
        pf a;
        nl
    }
    else if(n%3==1)
    {
        pf b;
        nl
    }
    else if(n%3==2)
    {
        pf c;
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
