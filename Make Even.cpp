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
    int d=s[s.length()-1]-48;
    int c=s[0]-48;
    int flag=0;
    if(d%2==0)
    {
        pf "0";
    }
    else if(c%2==0)
    {
        pf "1";
    }
    else
    {
        for(int i=1; i<s.length()-1; i++)
        {
            d=s[i]-48;
            if(d%2==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            pf "2";
        }
        else
        {
            pf "-1";
        }
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
