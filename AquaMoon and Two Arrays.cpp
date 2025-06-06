//https://codeforces.com/problemset/problem/1546/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

void fun()
{
    int m,sum=0,sum2=0,def=0;
    sf m;
    int arr[m],arr2[m];
    vector<int>big;
    vector<int>small;
    vector<int>big_index;
    vector<int>small_index;
    for(int i=0; i<m; i++)
    {
        sf arr[i];
        sum+=arr[i];
    }
    for(int i=0; i<m; i++)
    {
        sf arr2[i];
        sum2+=arr2[i];
        def+=abs(arr[i]-arr2[i]);
        if(arr[i]>arr2[i])
        {
            big.push_back(arr[i]-arr2[i]);
            big_index.push_back(i);
        }
        else if(arr[i]<arr2[i])
        {
            small.push_back(arr2[i]-arr[i]);
            small_index.push_back(i);
        }
    }
    if(sum!=sum2)
    {
        pf "-1"; nl
    }
    else
    {
        pf def/2; nl
        while(!big.empty())
        {
            pf big_index[big.size()-1]+1<<" "<<small_index[small.size()-1]+1; nl
            big[big.size()-1]--;
            small[small.size()-1]--;
            if(big[big.size()-1]==0)
            {
                big.pop_back();
                big_index.pop_back();
            }
            if(small[small.size()-1]==0)
            {
                small.pop_back();
                small_index.pop_back();
            }
        }
    }
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
