#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    string s;
    cin>>s;
    s="a"+s;
    int sum=0;

    for(int i=0; i<(s.length())-1; i++)
    {
        if(s[i]>s[i+1])
        {
            int tem = (int)(s[i]-s[i+1]);
            if(tem>13)
                tem=26-tem;

            sum=sum+tem;
        }
        else if(s[i]<s[i+1])
        {
            int tem = (int)(s[i+1]-s[i]);
            if(tem>13)
                tem=26-tem;

            sum=sum+tem;
        }
    }
    cout<<sum<<nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
