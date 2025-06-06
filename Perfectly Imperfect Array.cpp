#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,flag=0;
    sf n;
    for(int i=0; i<n; i++)
    {
        int temp;
        sf temp;
        if((int)sqrt(temp) != (double)sqrt(temp))
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        pf "YES";
    }
    else
    {
        pf "NO";
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
