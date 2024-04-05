//create the class name as car
#include<iostream>
#include<string>
using namespace std;
class student  //The class
{
  public:  //Acess specifier
     int prn; //Atributes(int variable)
      int marks; //Atributes(int variable)
       string name;//Atributes(string variable)
};

int main()
{
  student sujal; //Create an object of sujal
//Acess atributes and set values
 sujal.prn=72;
 sujal.marks=100;
 sujal.name="sujal vijay mane";
//print attribute values
cout<<"PRN: "<<sujal.prn<<"\n";
cout<<"MARKS: "<<sujal.marks<<"\n";
cout<<"NAME: "<<sujal.name<<"\n";
return 0;
}
