#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n;
    sf n;
    string s,s2;
    sf s>>s2;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='G')
        {
            s[i]='B';
        }
        if(s2[i]=='G')
        {
            s2[i]='B';
        }
    }
    if(s==s2)
    {
        pf "YES";
        nl
    }
    else
    {
        pf "NO";
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
