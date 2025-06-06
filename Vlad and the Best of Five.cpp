#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

void strings()
{
    string alp;
    int i,a=0,b=0;
    for(i=0; i<5; i++)
    {
        cin>>alp[i];
        if(alp[i]=='A')
            a++;
        else
        {
            b++;
        }
    }
    if(a>b)
    {
        cout<<"A"<<nl;
    }
    else
    {
        cout<<"B"<<nl;
    }
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t>0)
    {
        strings();
        t--;
    }

    return 0;
}
