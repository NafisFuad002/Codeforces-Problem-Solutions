#include<iostream>
using namespace std;
void fun()
{
    int r,i,m,c,rwc=0,rwm=0;
    cin>>r;
    for(i=1; i<=r; i++)
    {
        cin>>m>>c;
        if(m>c)rwm++;
        else if(m<c)rwc++;
    }
    if(rwc>rwm)cout<<"Chris\n";
    else if(rwc<rwm)cout<<"Mishka\n";
    else cout<<"Friendship is magic!^^\n";

}
int main()
{
    fun();

    return 0;
}
