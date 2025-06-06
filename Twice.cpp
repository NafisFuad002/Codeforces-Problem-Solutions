#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,sum=0;
    sf n;
    vector<int>arr;
    for(int i=0; i<n; i++)
    {
        int c;
        sf c;
        arr.push_back(c);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            sum++;
            i++;
            //arr.pop_back();
            //arr.pop_back();
        }
        /*else
        {
            //arr.pop_back();
        }*/
    }
    pf sum;
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
