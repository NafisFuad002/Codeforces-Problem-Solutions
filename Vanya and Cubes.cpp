#include<bits/stdc++.h>
using namespace std;
void cube()
{
    int n,i,k=0,x;
    cin>>n;
    for(i=1; ; i++)
    {
        k=k+i;
        n=n-k;
        if(n==0)
        {
            cout<<i<<endl;
            break;
        }
        else if(n<0)
        {
            cout<<i-1<<endl;
            break;
        }
    }
}
int main()
{
    cube();
    return 0;
}
