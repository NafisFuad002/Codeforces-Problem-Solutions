#include<iostream>
using namespace std;
void gt10()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>9 || (b+c)>9 || (c+a)>9)
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
    for(i=0; i<t; i++)
    {
        gt10();
    }
    return 0;
}
