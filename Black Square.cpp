#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int a,b,c,d,sum=0;
    sf a>>b>>c>>d;
    string s;
    sf s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1')
        {
            sum+=a;
        }
        else if(s[i]=='2')
        {
            sum+=b;
        }
        else if(s[i]=='3')
        {
            sum+=c;
        }
        else if(s[i]=='4')
        {
            sum+=d;
        }
    }
    pf sum;
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
