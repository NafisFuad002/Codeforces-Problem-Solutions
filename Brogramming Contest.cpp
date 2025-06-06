#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m=0,flag=0;
    sf n;
    string s;
    sf s;
    for(int i=0; i<s.length(); i++)
    {
        if(flag==0 && s[i]=='1')
        {
            m++;
            flag=1;
        }
        else if(flag==1 && s[i]=='0')
        {
            m++;
            flag=0;
        }
    }
    pf m;
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
