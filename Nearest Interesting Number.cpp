#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

bool fun(int n)
{
    int sum=0;

    while(n>0)
    {
        sum = sum+n%10;
        n = n/10;
    }

    if(sum%4==0)
        return true;
    else
        return false;
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    sf n;
    bool b = false;

    while(b == false)
    {
       bool b = fun(n);
       if(b == false)
       {
           n++;
       }
       else
        break;
    }

    pf n;
    nl

    return 0;
}
