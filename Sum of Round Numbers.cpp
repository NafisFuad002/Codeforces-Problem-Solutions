#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void print_0()
{
    pf "0";
}

void fun()
{
    string s;
    sf s;
    int c=count(s.begin(),s.end(),'0');
    pf(s.length()-c);nl
    int l=s.length()-1;
    while(l>=0)
    {
        if(s[l]!='0')
        {
            pf s[l];
            for(int i=1; i<=s.length()-1-l; i++)
            {
                print_0();
            }
            pf " ";
        }
        l--;
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
