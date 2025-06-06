#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,odd_counter=0,even_counter=0;
    sf n;
    vector<int>odd_numbers;
    vector<int>even_numbers;
    for(int i=0; i<n; i++)
    {
        int input;
        sf input;
        if(input%2==0)
        {
            even_numbers.push_back(input);
            even_counter++;
        }
        else
        {
            odd_numbers.push_back(input);
            odd_counter++;
        }
    }
    if(even_counter>=odd_counter)
    {
        for(int i=0; i<even_numbers.size(); i++)
        {
            pf even_numbers[i]<<" ";
        }
        for(int i=0; i<odd_numbers.size(); i++)
        {
            pf odd_numbers[i]<<" ";
        }
    }
    else
    {
        for(int i=0; i<odd_numbers.size(); i++)
        {
            pf odd_numbers[i]<<" ";
        }
        for(int i=0; i<even_numbers.size(); i++)
        {
            pf even_numbers[i]<<" ";
        }
    }
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
