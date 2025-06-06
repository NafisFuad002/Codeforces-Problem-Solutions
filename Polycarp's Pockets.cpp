#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n,temp,max_frequency=0;
    sf n;
    multiset<int>ms;
    for(int i=0; i<n; i++)
    {
        sf temp;
        ms.insert(temp);
    }
    for(auto it:ms)
    {
        if(ms.count(it)>max_frequency)
        {
            max_frequency=ms.count(it);
        }
    }
    pf max_frequency;nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
