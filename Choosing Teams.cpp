#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n,k,temp,counter=0;;
    sf n>>k;
    k=5-k;
    for(int i=0; i<n; i++)
    {
        sf temp;
        if(temp<=k)
        {
            counter++;
        }
    }
    pf counter/3;
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
