#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n;
    sf n;
    string b1 = "()";
    string b2 = "(";
    string b3 = ")";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            pf b2;
        }
        for(int j=i; j<n; j++)
        {
            pf b1;
        }
        for(int j=0; j<i; j++)
        {
            pf b3;
        }
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
       fun();
       t--;
    }

    return 0;
}
