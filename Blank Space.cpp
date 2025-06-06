#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int n;
    cin>>n;
    vector<int> bin;
    for(int i=1; i<=n; i++)
    {
        int in;
        cin>>in;
        bin.push_back(in);
    }

    int st=0,tc=0;

    for(int i=0; i<n; i++)
    {
        if(bin[i]==0)
        {
            tc++;
        }
        if(bin[i]==1 || i==n-1)
        {
            if(tc>st)
            {
                st=tc;
                tc=0;
            }
            tc=0;
        }
    }

    cout<<st<<nl;

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
