/*#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,lower,counter=0;
    sf n;
    vector<int>arr;
    for(int i=0; i<n; i++)
    {
        int e;
        sf e;
        arr.push_back(e);
    }
    sort(arr.begin(),arr.end());
    lower=arr[0];
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==lower)
        {
            break;
        }
        if(arr[i]>lower)
        {
            counter++;
        }
    }
    pf counter;
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
*/

#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

int test(vector<int>arr,int i,int counter)
{
    //pf counter<<" ";
    int lower=arr[0];
    if(arr[i]>lower)
    {
        counter++;
    }
    if(arr[i]==lower)
    {
        return counter;
        //pf counter;
        //nl
    }
    else
    {
        return test(arr,--i,counter);
    }
}

void fun()
{
    int n,result;
    sf n;
    vector<int>arr;
    for(int i=0; i<n; i++)
    {
        int e;
        sf e;
        arr.push_back(e);
    }
    sort(arr.begin(),arr.end());
    result=test(arr,n-1,0);

    pf result;
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
