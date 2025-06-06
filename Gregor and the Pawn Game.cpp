#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,counter=0;
    sf n;
    string my,opp;
    sf opp>>my;
    for(int i=0; i<n; i++)
    {
        if(my[i]=='1')
        {
            if(i>0 && opp[i-1]=='1')
            {
                opp[i-1]='2';
                my[i]='0';
                counter++;
            }
            else if(opp[i]=='0')
            {
                opp[i]='2';
                my[i]='0';
                counter++;
            }
            else if(opp[i+1]=='1')
            {
                opp[i+1]='2';
                my[i]='0';
                counter++;
            }
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
