#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,flag=0;
    sf n;
    n=n-2;
    string s,s2;
    vector<char>v;
    for(int i=0; i<n; i++)
    {
        sf s;
        if(i==0)
        {
            v.push_back(s[0]);
            v.push_back(s[1]);
        }
        else
        {
            if(s2[1]==s[0])
            {
                v.push_back(s[1]);
            }
            else
            {
                v.push_back(s[0]);
                v.push_back(s[1]);
                flag=1;
            }
        }
        if(i==n-1 && flag==0)
        {
            v.push_back('a');
        }
        s2=s;
    }

    for(auto i: v)
    {
        pf i;
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
