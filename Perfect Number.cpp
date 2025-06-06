//https://codeforces.com/contest/919/problem/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int k,counter=0,x,sum,i;
    sf k;
    string s;
    for(i=19; counter<=k; i++)
    {
        s=to_string(i);
        x=0;
        sum=0;
        while(x<s.length())
        {
            sum+=s[x]-48;
            x++;
        }
        if(sum==10)
        {
            counter++;
        }
        if(counter==k)
        {
            break;
        }
    }
    pf i; nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
