#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int x,y,u=0,d=0,l=0,r=0;
    string s;
    sf x>>y>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='U')
        {
            u++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
        else if(s[i]=='R')
        {
            r++;
        }
        else if(s[i]=='L')
        {
            l++;
        }
    }
    if(((y<=0 && d>=(-1)*y)||(y>=0 && u>=y)) && ((x<=0 && l>=(-1)*x)||(x>=0 && r>=x)))
    {
        pf "YES";
    }
    else
    {
        pf "NO";
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
