#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,flag=1;
    sf n;
    string s;
    sf s;
    if((int)sqrt(n)!=sqrt(n))
    {
        flag=0;
    }
    else
    {
        /*if(n==4 && s=="1111")
        {
            pf "YES";
        }
        else if(n==4 && s!="1111")
        {
            flag=0;
        }*/
        //else
        //{
            int m=0;
            for(int i=1; i<=sqrt(n); i++)
            {
                for(int j=1; j<=sqrt(n); j++)
                {
                    if((i==1 || i==sqrt(n) || j==1 || j==sqrt(n)) && s[m]!='1')
                    {
                        flag=0;//pf "called me";nl
                        break;
                    }
                    else if((i!=1 && i!=sqrt(n) && j!=1 && j!=sqrt(n)) && s[m]!='0')
                    {
                        flag=0;//pf "called me";nl
                        break;
                    }
                    m++;
                }
                if(flag==0)
                {
                    break;
                }
            }
        //}
    }

    if(flag==0)
    {
        pf "NO";
    }
    else
    {
        pf "YES";
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
