#include<iostream>
using namespace std;
void legs()
{
    int a,b,c,d,sum;
    cin>>a>>b>>c>>d;
    if(a==b)sum++;
    if(a==c)sum++;
    if(a==d)sum++;
    if(b==c)sum++;
    if(b==d)sum++;
    if(c==d)sum++;
    if(sum==0)cout<<"0";
    if(sum==1)cout<<"1";
    if(sum==2)cout<<"2";
    if(sum==3)cout<<"2";
    if(sum==6)cout<<"3";
}
int main()
{
    legs();

    return 0;
}
