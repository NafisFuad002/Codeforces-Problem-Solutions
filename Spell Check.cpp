#include<bits/stdc++.h>
using namespace std;
void spell_check()
{
    int n;
    cin>>n;
    string x;
    cin>>x;
    sort(x.begin(),x.end());
    if(x=="Timru")
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}
int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        spell_check();
    }

    return 0;
}
