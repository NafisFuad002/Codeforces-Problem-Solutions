//https://codeforces.com/contest/1800/problem/A
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
    char c;
    int n;
    sf n;
    string s="";
    for(int i=0; i<n; i++)
    {
        sf c;
        c=tolower(c);
        if(s.length()==0)
        {
            s+=c;
        }
        else if(s[s.length()-1]!=c)
        {
            s+=c;
        }
    }
    if(s=="meow")
    {
        py
    }
    else
    {
        pn
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
