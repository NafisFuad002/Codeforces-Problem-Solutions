#include<bits/stdc++.h>
using namespace std;
void new_year()
{
    int h,m,a,b;
    cin>>h>>m;
    a=60-m;
    b=24-(h+1);
    a=a+(b*60);
    cout<<a<<endl;
}
int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        new_year();
    }
    return 0;
}
