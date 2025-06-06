#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    string s;
    sf s;
    for(int i=97; i<105; i++)
    {
        if(s[0]!=(char)i)
        {
            pf (char)i<<s[1];
            nl
        }
    }
    for(int i=1; i<9; i++)
    {
        if(s[1]-48!=i)
        {
            pf s[0]<<i;
            nl
        }
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
