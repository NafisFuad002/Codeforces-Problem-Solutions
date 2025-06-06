#include<iostream>
using namespace std;
void floor()
{
    int n,x,f;
    cin>>n>>x;
    if(n<3)
    {
        cout<<1<<endl;
    }
    else
    {
        n=n-2;
        if(n%x==0)
        {
            f=n/x;
        }
        else
        {
            f=(n/x)+1;
        }
        cout<<f+1<<endl;
    }
}
int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        floor();
    }
    return 0;
}
