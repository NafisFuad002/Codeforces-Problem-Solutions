#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int red, blue;
    cin>>red>>blue;
    if(red>blue)
    {
        cout<<blue<<" "<<(int)((red-blue)/2)<<nl;
    }
    else if(red<blue)
    {
        cout<<red<<" "<<(int)((blue-red)/2)<<nl;
    }
    else
    {
        cout<<red<<" "<<(red-blue)<<nl;
    }
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
