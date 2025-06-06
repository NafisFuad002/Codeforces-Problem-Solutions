//https://codeforces.com/problemset/problem/1551/B1
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int counter=0,c=0;
    string s;
    sf s;
    map<char,int>m;
    for(int i=97; i<=122; i++)
    {
        m.insert({(char)i,0});
    }
    for(int i=0; i<s.length(); i++)
    {
        m[s[i]]++;
    }
    for(int i=97; i<=122; i++)
    {
        if(m[(char)i]>=2) counter++;
        else if(m[(char)i]==1) c++;
    }
    pf counter+(int)(c/2);
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
