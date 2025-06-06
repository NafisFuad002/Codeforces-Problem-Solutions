#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    string s;
    sf s;
    int counter1=0,counter0=0;
    for(int i=0; i<=s.length(); i++)
    {
        if(i==s.length())
        {
            pf "NO";
            break;
        }
        if(s[i]=='0')
        {
            counter0++;
            counter1=0;
        }
        else
        {
            counter0=0;
            counter1++;
        }
        if(counter0==7 || counter1==7)
        {
            pf "YES";
            break;
        }
    }
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
