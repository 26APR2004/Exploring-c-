#include<iostream>
using namespace std;

class baseclass
{
public:
int a=3,b=5;
int sum=a+b;

virtual void display()
{
cout<<"sum of "<<a<<" and "<<b<<"is "<<sum<<endl;
}
};

class derivedclass:public baseclass
{
int sub=a-b;

void display()
{
cout<<"subtraction of  "<<a<<" and "<<b<<" is "<<sub<<endl;
}
};

int main()
{
baseclass a;
derivedclass d1;
baseclass *ptr;
ptr=&a;
ptr->display();


}
