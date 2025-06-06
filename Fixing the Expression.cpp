/*#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    string s;
    sf s;
    if(s[1]=='=')
    {
        if(s[0]==s[2])
        {
            pf s;
            nl
        }
        else
        {
            s[2]=s[0];
            pf s;
            nl
        }
    }
    else if(s[1]=='<')
    {
        if(s[0]<s[2])
        {
            pf s;
            nl
        }
        else if(s[0]==s[2])
        {
            s[1]='=';
            pf s;
            nl
        }
        else
        {
            s[1]='>';
            pf s;
            nl
        }
    }

    else if(s[1]=='>')
    {
        if(s[0]>s[2])
        {
            pf s;
            nl
        }
        else if(s[0]==s[2])
        {
            s[1]='=';
            pf s;
            nl
        }
        else
        {
            s[1]='<';
            pf s;
            nl
        }
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
*/

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
    if(s[0]==s[2])
    {
        s[1]='=';
    }
    else if(s[0]<s[2])
    {
        s[1]='<';
    }
    else if(s[0]>s[2])
    {
        s[1]='>';
    }
    pf s;
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
