#include<bits/stdc++.h>
using namespace std;
void dragon()
{
    int a,b,c,d,A,i,counter=0;
    cin>>a>>b>>c>>d>>A;
    for(i=1; i<=A; i++)
    {
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0)
        {
            counter++;
        }
    }
    cout<<counter<<"\n";
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    dragon();

    return 0;
}
