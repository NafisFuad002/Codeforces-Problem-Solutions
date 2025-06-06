#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    vector<ll>arr;
    vector<ll>arr2;

    vector<char>a;
    vector<char>b;

    int flag=0,c1=1,c2=1,f2=0;
    string p,s;
    sf p>>s;
    if(s.length()<p.length())
    {
        pf "NO";
    }
    else if(s.length()==p.length() && s!=p)
    {
        pf "NO";
    }
    else
    {
        for(ll i=1; i<p.length(); i++)
        {
            if(p[i]==p[i-1])
            {
                c1++;
            }
            else
            {
                arr.push_back(c1);
                c1=1;
                a.push_back(p[i-1]);
            }
            if(i==p.length()-1)
            {
                arr.push_back(c1);
                a.push_back(p[i]);
            }
        }
        if(p.length()==1)
        {
            arr.push_back(c1);
            a.push_back(p[0]);
        }
        for(ll i=1; i<s.length(); i++)
        {
            if(s[i]==s[i-1])
            {
                c2++;
            }
            else
            {
                arr2.push_back(c2);
                c2=1;
                b.push_back(s[i-1]);
            }
            if(i==s.length()-1)
            {
                arr2.push_back(c2);
                b.push_back(s[i]);
            }
        }
        if(s.length()==1)
        {
            arr2.push_back(c2);
            b.push_back(s[0]);
        }
        if(arr.size()!=arr2.size())
        {
            pf "NO";
        }
        else
        {
            for(ll i=0; i<arr.size(); i++)
            {
                if((arr[i]>arr2[i]) || (arr2[i]>(arr[i]*2)))
                {
                    pf "NO";
                    //pf "H";nl
                    flag=1;
                    break;
                    //f2=1;
                }
                /*else if((arr2[i]>(arr[i]*2)) && f2==0)
                {
                    pf "NO";
                    flag=1;
                }*/
            }
            if(flag==0 && a==b)
            {
                pf "YES";
            }
            else if(flag==0 && a!=b)
            {
                pf "NO";
            }
        }
    }
    nl
    //pf p.length();nl
    //pf s.length();nl
    //pf arr.size();nl
    //pf arr2.size();nl

    //pf arr[0];nl
    //pf arr2[0];nl
    //pf c2;
    //for(auto it:a){pf it;}
    //for(auto it:b){pf it;}

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
/*
1
LLRR
LLRR
*/
