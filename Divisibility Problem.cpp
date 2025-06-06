#include<iostream>
using namespace std;
void divider()
{
    int a,b;
    cin>>a>>b;
    if((a%b)!=0)
    {
        cout<<(b-(a%b))<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        divider();
    }
    return 0;
}
