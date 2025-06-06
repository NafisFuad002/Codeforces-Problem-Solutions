#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    string s;
    sf s;
    int sum=0,temp=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>'1' && i==0)
        {
            sum+=s[i]-48;
        }
        else if(s[i]>'1')
        {
            temp=s[i]-48;
            if(sum<temp)
            {
                sum+=(temp-sum);
            }
        }
    }
    if(sum==0)
    {
        pf sum+1;
    }
    else
    {
        pf sum;
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
