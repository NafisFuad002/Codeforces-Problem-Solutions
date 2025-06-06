#include<iostream>
using namespace std;
void fun()
{
    string s;
    int sum1=0,sum2=0,i;
    cin>>s;
    for(i=0; i<6; i++)
    {
        if(i<3)
        {
            sum1=sum1+s[i];
        }
        else
        {
            sum2=sum2+s[i];
        }
    }
    if(sum1==sum2)
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
