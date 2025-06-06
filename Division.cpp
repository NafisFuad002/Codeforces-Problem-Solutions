#include<iostream>
using namespace std;
void fun()
{
    int r;
    cin>>r;
    if(r>=1900)
    {
        cout<<"Division 1\n";
    }
    else if(r>=1600)
    {
        cout<<"Division 2\n";
    }
    else if(r>=1400)
    {
        cout<<"Division 3\n";
    }
    else
    {
        cout<<"Division 4\n";
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
