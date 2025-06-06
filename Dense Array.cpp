#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,temp,counter=0,v;
    sf n;
    sf temp;
    for(int i=1; i<n; i++)
    {
        sf v;
        while((max((double)temp,(double)v)/min((double)temp,(double)v))>2.0)
        {
            if(temp<v)
            {
                temp=temp*2;
                //pf temp<<" ";
                counter++;
            }
            else
            {
                if(temp%2==1)
                {
                    temp=(temp+1)/2;
                }
                else
                {
                    temp=temp/2;
                }
                //pf temp<<" ";
                counter++;
            }
        }
        temp=v;
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
