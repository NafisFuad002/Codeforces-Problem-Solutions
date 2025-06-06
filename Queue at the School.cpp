#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n,t;
    sf n>>t;
    string s;
    sf s;
    while(t>0)
    {
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='G' && s[i-1]=='B')
            {
                swap(s[i],s[i-1]);
                i--;
            }
        }
        t--;
    }
    pf s;
    nl
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
