#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m,counter=0,sum=0,sl;
    //bool flag=true;
    string s1;
    sf n>>m;
    for(int i=0; i<n; i++)
    {
        sf s1;
        sl=s1.length();
        sum+=sl;
        if(sum<=m)
        {
            counter++;
        }
    }
    pf counter;
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
