#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    ll n,st,ds=0;
    cin>>n;
    cin>>st;
    for(int i=0; i<n; i++)
    {
        ll nm;
        char op;
        cin>>op;
        cin>>nm;
        if(op=='+')
        {
            st=st+nm;
        }
        else if(op=='-' && nm>st)
        {
            ds++;
        }
        else if(op=='-' && nm<=st)
        {
            st=st-nm;
        }
    }
    cout<<st<<" "<<ds<<nl;
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
