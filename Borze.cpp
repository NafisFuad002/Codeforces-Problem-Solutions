//https://codeforces.com/problemset/problem/32/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    string s;
    sf s;
    for(int i=0; i<s.length(); )
    {
        if(s[i]=='-' and s[i+1]=='.')
        {
            pf "1";
            i+=2;
        }
        else if(s[i]=='-' and s[i+1]=='-')
        {
            pf "2";
            i+=2;
        }
        else
        {
            pf "0";
            i++;
        }
    }
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
