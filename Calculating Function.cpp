#include<iostream>
using namespace std;
void calculating_function()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<"\n";
    }
    else
    {
        cout<<((n+1)/2)*(-1)<<"\n";
    }

}
int main()
{
    calculating_function();

    return 0;
}
