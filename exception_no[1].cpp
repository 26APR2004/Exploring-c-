#include<bits/stdc++.h>
using namespace std;
int main()
{
int number1,number2;
cout<<"Enter the two numbers:"<<"\n";
cin>>number1>>number2;
cout<<"Start:"<<"\n";
try{
cout<<"Inside the try block"<<"\n";
if(number2==0)
{
 throw(number2);
 cout<<"This part will not executed:"<<"\n";
}
else
{float result= (float)number1/number2;
cout<<"Divsion of to numbers:"<<result<<"\n"<<endl;}
}
catch(int i)
{
cout<<" this is catch block:"<<"\n";
cout<<i<<endl;
}
}
