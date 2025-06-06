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
    for(int i=0; i<s.length(); i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            pf "."<<s[i];
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
