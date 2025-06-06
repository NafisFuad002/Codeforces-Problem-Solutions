#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int n;
    int ecount=0;
    cin>>n;
    //vector<int> m_set;
    for(int i=0; i<(2*n); i++)
    {
        int inp;
        cin>>inp;
        //m_set.push_back(inp);
        if(inp%2==0)
        {
            ecount++;
        }
    }
    if(ecount==n)
    {
        cout<<"YES"<<nl;
    }
    else
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
