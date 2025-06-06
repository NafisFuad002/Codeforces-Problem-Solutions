#include<iostream>
using namespace std;
void fun()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c)
    {
        cout<<"YES\n";
    }
    else if(a+c==b)
    {
        cout<<"YES\n";
    }
    else if(b+c==a)
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
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        fun();
    }
    return 0;
}
