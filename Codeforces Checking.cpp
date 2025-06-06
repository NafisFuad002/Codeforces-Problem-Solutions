#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    string base = "codeforces";
    char c;
    bool f=false;
    cin>>c;
    for(int i=0; i<base.length(); i++)
    {
        if(base[i]==c)
        {
            f=true;
            cout<<"YES"<<nl;
            break;
        }
    }
    if(f==false)
    {
        cout<<"NO"<<nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t>0)
    {
        fun();
        t--;
    }

    return 0;
}
