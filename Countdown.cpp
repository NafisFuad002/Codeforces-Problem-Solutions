#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,counter=0,sum=0;
    string s;
    sf n>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(i==s.length()-1 && s[i]!='0')
        {
            sum+=s[i]-48;
        }
        else if(s[i]!='0')
        {
            sum+=s[i]-48;
            counter++;
        }
    }
    pf sum+counter;
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
