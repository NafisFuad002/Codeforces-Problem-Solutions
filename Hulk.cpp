#include<iostream>
using namespace std;
void fun()
{
    int n,i; string bijor,jor;
    cin>>n;
    bijor="I hate ";
    jor="I love ";
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<jor;
        }
        else
        {
            cout<<bijor;
        }
        if(i==n)
        {
            cout<<"it";
        }
        else
        {
            cout<<"that ";
        }
    }
}
int main()
{
    fun();

    return 0;
}
