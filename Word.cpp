#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
   string a;
   cin>>a;
   int i,u=0,l=0;
   for(i=0; i<a.length(); i++)
   {
       if(a[i]<=90)
       {
           u++;
       }
       else if(a[i]>=97)
       {
           l++;
       }
   }
   if(l>=u)
   {
       int i;
    for(i=0; i<a.length(); i++)
    {
        a[i]=tolower(a[i]);
    }
   }
   else
   {
       int i;
    for(i=0; i<a.length(); i++)
    {
        a[i]=toupper(a[i]);
    }
   }
   cout<<a<<endl;

    return 0;
}
