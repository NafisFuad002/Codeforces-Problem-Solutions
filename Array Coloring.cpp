#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

void fun()
{
    int n,c=0,temp;
    sf n;
    for(int i=0; i<n; i++)
    {
        sf temp;
        if(temp%2==1)
        {
            c++;
        }
    }
    if(c%2==0)
    {
        py
    }
    else
    {
        pn
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
       fun();
       t--;
    }

    return 0;
}
