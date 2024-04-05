//create the class name as car
#include<iostream>
#include<string>
using namespace std;
class car  //The class
{
  public:  //Acess specifier
     int wheels; //Atributes(int variable)
      int weight; //Atributes(int variable)
       string color;//Atributes(string variable)
};

int main()
{
  car car1; //Create an object of car
//Acess atributes and set values
 car1.wheels=4;
 car1.weight=100;
 car1.color="red";
//print attribute values
cout<<car1.wheels<<"\n";
cout<<car1.weight<<"\n";
cout<<car1.color<<"\n";
return 0;
}
