#include<bits/stdc++.h>
using namespace std;
void candies()
{
    long long int can;
    cin>>can;
    if(can%2==0)
    {
        cout<<(can/2)-1<<"\n";
    }
    else
    {
        cout<<(can/2)<<"\n";
    }
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    while(n>0)
    {
        candies();
        n--;
    }

    return 0;
}
