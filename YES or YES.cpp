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
    s[0]=toupper(s[0]);
    s[1]=toupper(s[1]);
    s[2]=toupper(s[2]);
    if(s=="YES")
    {
        pf "YES";
        nl
    }
    else
    {
        pf "NO";
        nl
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    sf t;
    while(t>0)
    {
        t--;
        fun();
    }

    return 0;
}
