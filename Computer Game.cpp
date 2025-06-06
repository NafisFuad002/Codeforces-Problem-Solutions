#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,flag=1;
    sf n;
    string s,s2;
    sf s>>s2;
    if(s2[n-1]!='0')
    {
        pf "NO";
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if(s[i]!='0' && s2[i]!='0')
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            pf "YES";
        }
        else
        {
            pf "NO";
        }
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
