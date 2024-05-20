#include<bits/stdc++.h>
using namespace std;
int main()
{
const string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
int n,m;
cin>>n>>m;
if(n<=9)
{for(int i=n-1;i<9;i++)
{
    cout<<arr[i]<<"\n";
    
    
}
if(n%2==0)
cout<<"even\n";
else
cout<<"odd\n";}
else
{if(n%2==0)
cout<<"even\n";
else
cout<<"odd\n";}


if(m<=9)
{for(int i=m-1;i<9;i++)
{
    cout<<arr[i]<<"\n";
    
    
}
if(m%2==0)
cout<<"even\n";
else
cout<<"odd\n";}
else
{if(m%2==0)
cout<<"even\n";
else
cout<<"odd\n";}
}
