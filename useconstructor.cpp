//defining the constructor within the class
#include<iostream>
#include<string>
using namespace std;

class student
{
 int prn;
 string name;
 int fee;

public:
//constructor
student()
{
 cout<<"Enter the PRN  number: ";
 cin>>prn;
 cout<<"Enter the name:  ";
 cin>>name;
 cout<<"Enter the fee :  ";
 cin>> fee;
}
//display
void display()
{
 cout<<endl<<prn<<"\t"<<name<<"\t"<<fee;

}
};

int main()
{
  student s1;//constructor gets called automatically when we create the object of the class
  s1.display();
 return 0;

}
