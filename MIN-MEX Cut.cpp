#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    string s;
    sf s;
    int sum=0;
    if(s=="0")
    {
        sum=1;
    }
    for(int i=1; i<s.length(); i++)
    {
        if(i==s.length()-1)
        {
            if(s[i]=='0')
            {
                sum+=1;
            }
        }
        if(s[i]!=s[i-1])
        {
            if(s[i-1]=='0')
            {
                sum+=1;
            }
        }
    }
    if(sum>2)
    {
        pf "2";
    }
    else
    {
        pf sum;
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
