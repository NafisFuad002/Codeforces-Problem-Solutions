#include<bits/stdc++.h>
using namespace std;
void sortings()
{
    string a,b,c,d;
    cin>>a>>b>>c;
    d=a+b;

    sort(d.begin(),d.end());
    sort(c.begin(),c.end());

    if(d==c)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    sortings();

    return 0;
}
