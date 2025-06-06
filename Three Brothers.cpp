#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int a,b,c;
    sf a>>b;
    c=a+b;
    if(c==3)
    {
        pf "3";nl
    }
    else if(c==4)
    {
        pf "2";nl
    }
    else
    {
        pf "1";nl
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
