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
    char a[500];
    string s;

    for(int i=0; i<n; i++)
    {
        sf s;
        if(s[0]=='#')
        {
            a[i]='1';
        }
        else if(s[1]=='#')
        {
            a[i]='2';
        }
        else if(s[2]=='#')
        {
            a[i]='3';
        }
        else if(s[3]=='#')
        {
            a[i]='4';
        }
    }
    for(int j=n-1; j>=0; j--)
    {
        pf a[j]<<" ";
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
