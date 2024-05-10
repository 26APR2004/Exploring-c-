#include<bits/stdc++.h>
using namespace std;
int main(){
try{
int age;
cout<<"Enter your age:";
cin>>age;
if(age>=18)
cout<<"you are able to vote:";
else{
throw(age);

}}
catch(int myage)
{
cout<<"Acess denied-You must be at least 18 year old"<<"\n";
cout<<"Age is:"<<myage<<"\n";
}

return 0;
}
