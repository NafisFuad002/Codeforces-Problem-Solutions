#include<bits/stdc++.h>
using namespace std;

//#define nl "\n"
#define ll long long

void fun()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int TD = k*l;
    int TL = c*d;
    int z = TL;
    int x = TD/nl;
    int y = p/np;
    //cout<<x<<" "<<y<<" "<<z<<"\n";
    x=x/n;
    y=y/n;
    z=z/n;
    //cout<<x<<" "<<y<<" "<<z<<"\n";
    if(z<=x && z<=y)
    {
        cout<<z<<"\n";
    }
    else if(y<=x && y<=z)
    {
        cout<<y<<"\n";
    }
    else if(x<=y && x<=z)
    {
        cout<<x<<"\n";
    }
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
