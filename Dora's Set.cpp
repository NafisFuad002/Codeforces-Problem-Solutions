#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int l,r,odd;
    sf l>>r;
    odd=(abs(l-r)+1)/2;
    if(l%2==1 && r%2==1)
    {
        odd++;
    }
    pf (int)(odd/2);
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
