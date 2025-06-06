#include<iostream>
using namespace std;
void fun()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c)
    {
        cout<<"+\n";
    }
    else if(a-b==c)
    {
        cout<<"-\n";
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
