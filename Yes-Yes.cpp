#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    bool b=false;
    string s;
    sf s;
    if(s.length()==1)
    {
        if(s[0]=='Y' || s[0]=='e' || s[0]=='s')
        {
            pf "Yes";
            nl
        }
        else
        {
            pf "No";
            nl
        }
    }
    else
    {
        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i]=='Y' || s[i]=='e' || s[i]=='s')
            {
                if(s[i]=='Y' && s[i+1]!='e')
                {
                    b=false;
                    pf "No";
                    nl
                    break;
                }
                else if(s[i]=='e' && s[i+1]!='s')
                {
                    b=false;
                    pf "No";
                    nl
                    break;
                }
                else if(s[i]=='s' && s[i+1]!='Y')
                {
                    b=false;
                    pf "No";
                    nl
                    break;
                }
                else
                {
                    b=true;
                }
            }
            else
            {
                pf "No";
                nl
                break;
            }
        }
    }
    if(b==true)
    {
        pf "Yes";
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



/*#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

string s;

bool test_Y(char c,int i)
{
    if(s[i+1]=='e')
    {
        return true;
    }
    else
        return false;
}
bool test_e(char c,int i)
{
    if(s[i+1]=='s')
    {
        return true;
    }
    else
        return false;
}
bool test_s(char c,int i)
{
    if(s[i+1]=='Y')
    {
        return true;
    }
    else
        return false;
}

void fun()
{
    int i=0;
    bool b=true;
    sf s;

    if(s.length()==1)
    {
        if(s[i]=='Y' || s[i]=='e' || s[i]=='s')
        {
            b=true;
        }
        else
        {
            b=false;
        }
    }
    else
    {
        for(i=0; i<s.length()-1; i++)
        {
            if(s[i]=='Y')
            {
                b = test_Y('Y',i);
            }
            else if(s[i]=='e')
            {
                b = test_e('e',i);
            }
            else if(s[i]=='s')
            {
                b = test_s('s',i);
            }
            else
            {
                b=false;
                break;
            }
            if(b!=true)
            {
                b=false;
                break;
            }
        }
    }
    if(b==true)
    {
        pf "Yes";
        nl
    }
    else
    {
        pf "No";
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
*/
