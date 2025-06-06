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
    int fst=0,lst,len;
    char c;
    while(s.length()>1)
    {
        len=s.length();
        lst=len-1;
        c=96+len;
        if(s[fst]==c)
        {
            s.erase(fst,1);
        }
        else if(s[lst]==c)
        {
            s.erase(lst,1);
        }
        else
        {
            break;
        }
    }
    if(s=="a")
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
