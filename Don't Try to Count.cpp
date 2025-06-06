//https://codeforces.com/contest/1881/problem/A
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
    int a,b,flag=0;
    sf a>>b;
    string s,s2;
    sf s>>s2;
    for(int i=0; i<=10; i++)
    {
        if(s.find(s2) != string::npos)
        {
            pf i; nl
            flag=1;
            break;
        }
        else
        {
            s=s+s;
        }
    }
    if(flag==0)
    {
        pf "-1"; nl
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
