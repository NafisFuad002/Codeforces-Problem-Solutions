#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int o=0,z=0;
    string s;
    sf s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
            z++;
        else
            o++;
    }
    if(s.length()==2)
    {
        pf "0";
    }
    else if(o==z)
    {
        pf z-1;
    }
    else if(o>z)
    {
        pf z;
    }
    else
    {
        pf o;
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
