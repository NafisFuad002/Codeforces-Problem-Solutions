#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int a,b,z=0,on=0,qs,flag=1;
    sf a>>b;
    string s,s2;
    sf s;
    for(int i=0,j=s.length()-1; i<(int)(s.length())/2; i++,j--)
    {
        if(s[i]!='?' && s[j]=='?')
        {
            s[j]=s[i];//pf "called me";nl
        }
        else if(s[j]!='?' && s[i]=='?')
        {
            s[i]=s[j];//pf "called me";nl
        }
        else if((s[i]=='1' && s[j]=='0') || (s[i]=='0' && s[j]=='1'))
        {
            flag=0;//pf "called me";nl
        }
    }

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1')
        {
            on++;
        }
        else if(s[i]=='0')
        {
            z++;
        }
    }
    qs=s.length()-on-z;//pf z<<" "<<on<<" "<<qs;nl
    if(a<z || b<on || qs!=(a-z)+(b-on) || flag==0)
    {
        pf "-1";
        nl
    }
    else
    {
        int one_need=b-on,z_need=a-z;
        for(int i=0,j=s.length()-1; i<(int)(s.length())/2; i++,j--)
        {
            if(s[i]=='?' && s[j]=='?')
            {
                if(one_need>=2)
                {
                    s[i]=s[j]='1';
                    one_need-=2;
                }
                else if(z_need>=2)
                {
                    s[i]=s[j]='0';
                    z_need-=2;
                }
            }
        }
        int x=(s.length()+1)/2;
        x--;
        if(s.length()%2==1 && s[x]=='?')
        {

            if(one_need>0)
            {
                s[x]='1';
            }
            else
            {
                s[x]='0';
            }
        }

        s2=s;
        reverse(s2.begin(),s2.end());
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='?')
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            pf "-1";
            nl
        }
        else if(s==s2)
        {
            pf s2;
            nl
        }
        else
        {
            pf "-1";
            nl
        }
    }
    //pf s;nl
    //pf s2;nl

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
