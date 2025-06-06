//https://codeforces.com/contest/2098/problem/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int flag=1;
    char c;
    int arr[10],x;
    fill(arr,arr+10,0);
    map<char,int>m= {{'0',0},{'1',0},{'2',0},{'3',0},{'4',0},{'5',0},{'6',0},{'7',0},{'8',0},{'9',0}};
    for(int i=1; i<=10; i++)
    {
        sf c;
        m[c]++;
    }
    for(int i=0; i<10; i++)
    {
        flag=1;
        x=9-i;
        if(i==9)
        {
            x=0;
        }
        c=x+48;
        while(flag==1 && c<=57)
        {
            if(m[c]>0)
            {
                m[c]--;
                arr[i]=c-48;
                flag=0;
            }
            else
            {
                c++;
            }
        }
    }
    for(auto i:arr)
    {
        pf i;
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
/*
1
9999999999
*/
