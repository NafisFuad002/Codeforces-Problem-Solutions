#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

void fun()
{
    string s,t;
    sf s>>t;
    sort(s.begin(),s.end());
    int a=count(s.begin(),s.end(),'a');
    int b=count(s.begin(),s.end(),'b');
    int c=count(s.begin(),s.end(),'c');
    if(a>0 && b>0 && c>0 && t[0]=='a')
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a')
            {
                pf s[i];
            }
        }
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==t[2])
            {
                pf s[i];
            }
        }
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==t[1])
            {
                pf s[i];
            }
        }
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!='a' && s[i]!='b' && s[i]!='c')
            {
                pf s[i];
            }
        }
    }
    else
    {
        pf s;
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
