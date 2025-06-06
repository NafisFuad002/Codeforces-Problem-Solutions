#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,flag=1,counter=0,swz=-1,zc=0;
    sf n;
    char c;
    string s;
    sf s;
    if(s[0]=='0')
    {
        counter++;
    }
    else
    {
        counter+=2;
        swz=1;
    }
    c=s[0];
    for(ll i=1; i<s.length(); i++)
    {
        if(s[i]!=c)
        {
            counter+=2;
            c=s[i];
            flag++;
        }
        else
        {
            counter++;
        }
        if(s[i]=='0')
        {
            zc++;
        }
    }
    if(flag>3)
    {
        counter-=2;
    }
    else if(flag==3 && s[0]=='0')
    {
        counter--;
    }
    else if(flag==3 && s[0]=='1')
    {
        counter-=2;
    }
    else if(flag==2 && s[0]=='1')
    {
        counter--;
    }
    pf counter;
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
