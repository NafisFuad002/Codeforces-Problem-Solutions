#include<iostream>
using namespace std;
void fun()
{
    string a,b;
    cin>>a>>b;
    int i;
    for(i=0; i<a.length(); i++)
    {
        if(a[i]==b[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
    }

}
int main()
{
    fun();

    return 0;
}
